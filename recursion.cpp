#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rec(int ind, int w) {
    if (ind == n || w == 0) {
        return 0;
    }
 
    int leave=rec(ind+1, w);
    if (weight[ind]<=w)
        int take=rec(ind+1, w-weight[ind])+val[ind];
    return max(take, leave);
}