#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    for (int i=0;i<a;i++) {
        int x, y;
        cin>>x>>y;
        if (x==0 || y==0 || x<y) {
            cout<<"No"<<"\n";
            return 0;
        }
        int t = x/y;
        if (t%2==0 && (x%y)==0) {
            cout<<"Yes"<<"\n";
        } else {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}