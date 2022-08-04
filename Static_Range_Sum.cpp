#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int count, q;
    cin>>count>>q;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        /* code */
        cin>>a[i];
    }
    int p[count];
    p[0]= a[0];
    for (int i = 1; i < count; i++)
    {
        p[i] = p[i-1] + a[i];
    }
    
    while (q--)
    {
        /* code */
        int l, r;
        cin>>l>>r;
        if (r > 0) {
            r--;
        }
        int sum = p[r];
        if (l>0) {
            /* code */
            //sum= sum+a[i];
            sum-=p[l-1];
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}
