#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void findCombination(int ind, ll target, vector < ll > & arr, vector < vector < ll >> & ans, vector < ll > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }

vector<vector<ll>> combinationSum(vector<ll>& candidates, ll target) {
        vector < vector < ll >> ans;
        vector < ll > ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
}

void solve() {
    ll b;
    vector<ll>v;
    for(int i=0;i<4;i++)
    {
        cin>>b;
        v.push_back(b);  
    }
    ll target = v[0];
    v.erase(v.begin());
    vector < vector < ll >> ans = combinationSum(v, target);
    for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
      //cout << "YES" << "\n";
    }
    cout<<"\n";
    }
    //cout << "YES"<<"\n";
}

int main() {
  int t;
  cin>>t;
  while(t--)
  solve();
  return 0;
}