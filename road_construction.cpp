/******************************************
* AUTHOR : Prabhat Ravi *
* NICK : prabhatravi/binaryfetch/binaryfetch_9 *
******************************************/
#include <algorithm>
#include <bits/stdc++.h>
#include <type_traits>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define F first
#define S second
struct UnionFind {
    int n, set_size, *parent, *rank;
    UnionFind() {}
    UnionFind(int a) {
        n = set_size = a; parent = new int[n + 1]; rank = new int[n + 1];
        for (int i = 1; i <= n; ++i) parent[i] = i, rank[i] = 1;
    }
    int find(int x) {if (x != parent[x]) return parent[x] = find(parent[x]); return x;}
    bool merge(int x, int y) {
        int xroot = find(x), yroot = find(y);
        if (xroot != yroot) {
            if (rank[xroot] >= rank[yroot]) {parent[yroot] = xroot; rank[xroot] += rank[yroot];}
            else {parent[xroot] = yroot; rank[yroot] += rank[xroot];}
            set_size -= 1;
            return 1;
        }
        return 0;
    }
    void reset() {
        set_size = n; for (int i = 1; i <= n; i++)parent[i] = i, rank[i] = 1;
    }
    int sz(int x) {
        x = find(x);
        return rank[x];
    }
    int size() { return set_size; }
    void print() {for (int i = 1; i <= n; ++i)cout << i << " -> " << parent[i] << "\n";}
};

int main() {
    int n, m;
    cin >> n >> m;
    UnionFind dsu(n);
    // int mx = 1, cc = n;
    int mx = 1;
    while (m--) {
        int u, v;
        cin >> u >> v;
        if (dsu.merge(u, v)) {
            // cc--;
            // mx = max(mx, max(dsu.sz(u), dsu.sz(v)));
            mx = max({mx, dsu.sz(u), dsu.sz(v)});
        }
        // cout << cc << " " << mx << "\n";
        cout << dsu.size() << " " << mx << "\n";
    }
    return 0;
}