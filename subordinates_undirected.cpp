#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll=long long;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

const ll N=2e5+5;
vector<ll>g[N];
vector<ll>ans(N);

void dfs(ll s, ll p) {
    ans[s]=1;
    for (auto e : g[s]) {
        if (e!=p) {
            dfs(e, s);
            ans[s]+=ans[e];
        }
    }
}

int main() {
    ll n;
    cin>>n;
    for (int i = 1; i < n; ++i) {
        ll u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    for(int i=1;i<=n;i++) {
        cout<<ans[i]-1<<" ";
    }
    return 0;
}