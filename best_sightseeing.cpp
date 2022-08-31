class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        // to store best start site till index i
        vector<int> i(v.size());
        i[0] = v[0] + 0;
        // filling array
        for(int x = 1; x<v.size();x++)
            i[x] = max(i[x-1], v[x] + x);
        int ans = 0;
        // searching best macth with every end site
        for(int x=1;x<v.size();x++)
            if(ans < v[x] - x + i[x-1]) ans = v[x] - x + i[x-1];
        return ans;
    }
};