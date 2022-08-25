#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int km;
        cin>>km;
        if (km<=300) {
            cout<<"3000"<<"\n";
        } else {
            cout<<10*km<<"\n";
        }
    }
}