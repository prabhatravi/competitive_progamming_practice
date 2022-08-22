#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
const int N = 2e5 + 5;
int main() {
    int a;
    cin>>a;
    for (int i=0;i<a;i++) {
        int b;
        cin>>b;
        int arr[b];
        for (int j=0;j<b;j++) {
            cin>>arr[j];
        }
        int k;
 
       // Map to keep track of elements
       unordered_map<int, bool> visited;
 
       visited.clear();
       visited.insert({ arr[0], 1 });
 
       for (k = 1; k < b; k++) {
        if (arr[k] == arr[k - 1])
            continue;
        else if (visited[arr[k]])
            return "No";
        visited[arr[i]] = 1;
    }
 
    return "Yes";

    }
}