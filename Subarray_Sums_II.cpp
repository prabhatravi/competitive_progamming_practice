#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n = 5, x = 7;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int sum = 0;
    int ans = 0;
    map<int, int>m;
    m[0] =1;
    for(auto e:a) {
        sum += e;
        ans +=m[sum-x];
        m[sum]++;

    }
    cout <<"ans:"<<ans<<"\n";

    return 0;
}