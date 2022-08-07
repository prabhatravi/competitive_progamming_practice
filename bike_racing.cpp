#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool ck(long v, long n, long m, long l, long h[], long a[]) {
        long tot=0;
        for (int i = 0; i < n; i++) {
            long cur=h[i]+(v*a[i]);
            if (cur>=l) {
                tot+=cur;
            }
        }
        if (tot>=m){
            return 1;
        }
        return 0;
    }

    long buzTime(long N, long M, long L, long H[], long A[]) {
        long low=0,high=2e9+5;
        long ans;
        while (low<=high) {
            long mid = (low+mid)/2;
            if (ck(mid, N, M, L, H, A)) {
                high=mid-1;
                ans=mid;
            } else {
                low = mid+1;
            }
        }
        return ans;
    }
};

