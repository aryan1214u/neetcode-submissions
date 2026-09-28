class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> mp;
        for (char ch : s1) mp[ch]++;
        int k = s1.size();
        int syze = s2.size();
        if (syze < k) return false;
        map<char, int> newmap;
        for (int i = 0; i < k; i++) newmap[s2[i]]++;
        for (int i = k - 1; i < syze - 1; i++) {
            if (mp == newmap) return true;
            newmap[s2[i - k + 1]]--;
            if(newmap[s2[i - k + 1]]==0) newmap.erase(s2[i - k + 1]);
            newmap[s2[i + 1]]++;
        }
        if (newmap == mp)
            return true;
        else
            return false;
    }
};
