class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> target;
        for (auto s : s1) {
            ++target[s];
        }
        
        int left = 0, right = 0;
        while (right < s2.size()) {
            --target[s2[right]];
            if ((right - left + 1) == s1.size()) {
                bool all_zero = true;
                for (auto t : target) {
                    if (t.second != 0) {
                        all_zero = false;
                        break;
                    }
                }
                
                if (all_zero) {
                    return true;
                }
                
                ++target[s2[left]];
                ++left;
            }
            
            ++right;
        }
        
        return false;
    }
};