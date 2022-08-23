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
const int mxe = log2(N) + 5;

int dp[N][mxe];
vector <int>g[N];

// find 2^0th parent
void dfs(int e, int p) {
    dp[e][0] = p;
    for (auto ng : g[e]) {
        if (!dp[ng][0]) {
            dfs(ng, e);
        }
    }
}

int main() {
    memset(dp, 0, sizeof(dp));
    dfs(1, -1);
    for (int x = 0; x < N; x++) {
        for (int i = 1; i < mxe; i++) {
            dp[x][i] = dp[dp[x][i - 1]][i - 1];
        }
    }
    while (q--) {
        int x, k;
        cin >> x >> k;
        int ans = -1;
        for (int i = 0; i < mxe; i++) {
            // checking the bit on/off at ith position
            if (k & (1 << i)) {
                x = dp[x][i];
            }
        }
        cout << x;
    }
    return 0;
}