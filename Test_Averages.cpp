#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    vector<int>v;
    int x, y, z;
    int a;
    cin>>a;
    for (int i=0;i<a;i++) {
    cin>>x>>y>>z;
    if ((x+y)/2<35) {
        cout<<"Fail"<<"\n";
    } else if ((x+z)/2<35) {
       cout<<"Fail"<<"\n"; 
    } else if ((y+z)/2<35) {
        cout<<"Fail"<<"\n"; 
    } else {
        cout<<"Pass"<<"\n"; 
    }
    }
	return 0;
}