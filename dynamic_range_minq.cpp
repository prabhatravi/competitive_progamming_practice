/******************************************
* AUTHOR : Prabhat Ravi *
* NICK : prabhatravi/binaryfetch/binaryfetch_9 *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
const int N = 2e5 + 5;
int a[N];
int t[N * 4];
void build(int ind, int l, int r) {
    if (l == r) { // leaf node
        t[ind] = a[l];
        return;
    }
    int mid = (l + r) / 2; //divide the tree into left and right
    build(2 * ind, l, mid); // left side
    build(2 * ind + 1, mid + 1, r); // right side
    t[ind] = min(t[2 * ind], t[2 * ind + 1]);
}

// lq and rq are in the range given in the question
// l and r are our own
int query(int ind, int l, int r, int lq, int rq) {
    // not contribute the ans
    if (r < lq || l > rq) {
        return 10000;
    }
    // contribute the ans
    if (l >= lq && r <= rq) {
        return t[ind];
    }
    int mid = (l + r) / 2;
    // go down
    return min(query(ind * 2, l, mid, lq, rq), query(ind * 2 + 1, mid + 1, r, lq, rq));
}

void update(int ind, int l, int r, int pos, int val) {
    if (r < pos || l > pos) {
        return;
    }
    if (l == r) {
        t[ind] = val;
        a[pos] = val;
        return;
    }
    int mid = (l + r) / 2;
    update(2 * ind, l, mid, pos, val); // left side
    update(2 * ind + 1, mid + 1, r, pos, val); // right side
    t[ind] = min(t[2 * ind], t[2 * ind + 1]);
}
int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int pos, val;
            cin >> pos >> val;
            update(1, 0, n - 1, pos - 1, val);
        } else {
            int lq, rq;
            cin >> lq >> rq;
            cout << query(1, 0, n - 1, lq - 1, rq - 1) << "\n";
        }

    }

    return 0;
}