#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+5;
vector<int>prime;
vector<int>ls;
void seive(){
    for (int i=2;i<N;i++) {
        if (prime[i]) {
            ls.push_back(i);
            //for (int j=i*2;j<N;j=+i) {
            for (int j=i*i;j<N;j=+i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    prime.resize(N, 1);
    prime[0]=prime[1]=0;
    seive();
    for(auto e:ls){
        cout<<e<<" ";
    }
}