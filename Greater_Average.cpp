#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        int tmp = a+b;
        if (tmp%2==1) {
            tmp += 1; 
        }
        int r = tmp/2;
        if (r>c) {
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
}