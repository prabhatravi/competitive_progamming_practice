#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
#define pb push_back
vector<int>g[N];
vector<int>vis(N, 0);
vector<int>col(N, 0);

bool color() {

}

bool dfs(int s, int cl, int p) {
    col[s]= cl;
    vis[s]=1;
    for (auto c:g[s]){
        // for itself
        if (c==p) {
            continue;
        }
        // if not coloured
        if (col[c]==0) {
#if 0
            int nc;
            if (cl==1) {
                nc=2;
            } else {
                nc=1;
            }
            
            if (dfs(c, nc, s)==0) {
#endif
            if (dfs(c, (3-cl), s)) {
                return 0;
            }
        }
        // if coloured
        if (col[c]==col[s]) {
            return 0;
        }
    }
    return 1;
}

bool colour(int n) {
    for (int i =1;i<=n;i++) {
        if (!vis[i]) {
            if (dfs(i, 1, -1)==0) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n, m;
    cin>>n>>m;
    while(m--) {
        int x, y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    bool ck=colour(n);
    if (!ck) {
        cout<<"IMPOSSIBLE";
    } else {
        for (int i=1;i<=n;i++) {
            cout <<col[i]<<" "; 
        }
    }
}