/******************************************
* AUTHOR : Prabhat Ravi *
* NICK : prabhatravi/binaryfetch/binaryfetch_9 *
******************************************/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define LL long long
const int N = 2e5 + 5;
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
vector<int>g[N];
int c[N];

void dfs(int s) {
    c[s] = 1;
    for (auto e : g[s]) {
        dfs(e);
        c[s] += c[e];
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        int x;
        cin >> x;
        x--;
        g[x].pb(i);
    }
    dfs(0);
    for (int i = 0; i < n; i++) {
        cout << (c[i] - 1) << " ";
    }

    return 0;
}