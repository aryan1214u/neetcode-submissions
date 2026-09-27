class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1) return 1;
        int n = s.size();
        map<char,int> mp;
        int cmax = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            mp[s[r]]++;   

            while (mp[s[r]] > 1) {
                mp[s[l]]--;
                l++;
            }

            cmax = max(cmax, r - l + 1);
        }
        return cmax;
    }
};