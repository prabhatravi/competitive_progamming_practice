#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int dr[4]= {-1, 1, 0, 0};
int dc[4]= {0, 0, -1, 1};
int vis[N][N];
int n, m;

bool val(int r, int c) {
    if (r<0||r>=n||c<0||c>=m) {
        return 0;
    }
    return 1;
}

void dfs(int r, int c) {
    vis[r][c]=1;
    for (int i=0;i<4;i++) {
        int nr=r+dr[i];
        int nc=c+dc[i];
        if (val(nc, nr) && vis[nr][nc]==0) {
            dfs(nr, nc);
        }
    }
}

void main() {
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        for (int j=0;j<m;j++) {
            char c=s[j];
            if (c=='#') {
                vis[i][j]=1;
            } else {
                vis[i][j]=0;
            }
        }
    }
    int c=0;
    for (int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                dfs(i, j);
                c++;
            }
        }
        
    }
    cout<<c;
}