#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool ck(long long int x, int a[], int n, int m) {
        int cn=0;
        long long int sum=0;
        for(int i=0; i<n; i++) {
            if (sum+a[i] <= x) {
                sum += a[i];
            } else {
                cn++;
                sum =0;
                if (sum+a[i]<= x) {
                    sum += a[i];

                } else {
                    return 0;
                }
            }
        }
    }
};