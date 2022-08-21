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
int cr[N];

// find the CR
int find(int x) {
    // iterative way
    // while (cr[x] != x) {
    //     x = cr[x];
    // }
    // return x;

    // recursive way to find the CR
    if (cr[x] == x) {
        return x;
    }
    int ans = find(cr[x]);
    // save the answer
    cr[x] = ans;
    return ans;
}

// merge the parent
void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        cr[u] = v;
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    // assign parent of itself
    for (int i = 0; i < n; i++) {
        cr[i] = i;
    }
    while (q--) {
        int t, v, u;
        cin >> t >> u >> v;
        if (t == 1) {
            // if u and v are connected or not
            if (find(u) == find(v)) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            // add an edge from u to v
            merge(u, v);
        }
    }
    return 0;
}