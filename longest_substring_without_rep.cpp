class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0, n = s.size(), right = 0, left = 0;
    vector<int>mp(256,-1);
    while(right<n){
        if(mp[s[right]]!=-1) left = max(left, mp[s[right]]+1);
        mp[s[right]]=right;
        count = max(count, right-left+1);
        right++;
    }
    return count;
    }
};