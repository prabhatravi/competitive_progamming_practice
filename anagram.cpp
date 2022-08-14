#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isAnagram(string a, string b) {
        vector<int>f(26, 0);
        for(auto e:a) {
            f[e-'a']++;
        }
        for (auto e:b) {
            f[e-'a']--;
        }
        for(auto e:f) {
            if (e!=0) {
                return 0;
            }
        }
        return 1;
    }

};