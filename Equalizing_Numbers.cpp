#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int i=0;i<x;i++) {
    int a, b;
    cin>>a>>b;
    if ((a-b)%2 == 0) {
        cout<<"Yes"<<"\n";
    } else {
        cout<<"No"<<"\n";
    }
    }
    return 0;
}