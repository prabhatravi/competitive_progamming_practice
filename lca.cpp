/******************************************
* AUTHOR : Prabhat Ravi *
* NICK : prabhatravi/binaryfetch/binaryfetch_9 *
******************************************/
#include <bits/stdc++.h>
#include <vector>
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
int mxe = log2(N);
int dp[N][mxe];
vector<int>g[N];

void dfs(int s, int d) {
    dis[s] = d;
    for (auto e : g[s]) {
        if (dis[e] == -1) {
            dfs(e, d + 1);
        }
    }
}

int lca(int a, int b) {
    if (dis[a] < dis[b]) {
        swap(a, b);
    }
    int d = dis[a] - dis[b];
    a = binary_lifting(a, d);
    if (a == b) {
        return a;
    }
    for (int i = mxe - 1; i >= 0; i--) {
        if (dp[a][i] != -1 && (dp[a][i] != dp[b][i])) {
            a = dp[a][i];
            b = dp[b][i];
        }
    }
    return dp[a][0];
}
int main() {

    return 0;
}