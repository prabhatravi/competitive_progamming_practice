#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ff first
#define ss second
const int N=1e5+5;
const int mx=INT_MAX-10;

int main() {
    priority_queue<pii>pq;
    vector<int>dis(N, mx);
    int s;
    dis[s]=0;
    pq.push({0, s});
    while (!pq.empty()){
        auto tp=pq.top();
        int w=-1*tp.ff;
        int n=tp.ss;
        for (auto ng:g[n]) {
            if (dis[ng]>w+ng.ss) {
                dis[ng]=w+ng.ss;
                pq.push({-1*dis[ng], ng});
            }
        }
    }
}