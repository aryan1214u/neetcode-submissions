class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        for(int k = 0; k < n; k++) {
            int target = -nums[k];
            map<int,int> mp;
            for(int i = 0; i < n; i++) {
                int x = target - nums[i];
                auto it = mp.find(x);
                if(it != mp.end() && i != k && it->second != k) {
                    vector<int> v = {nums[k], nums[i], it->first};
                    sort(v.begin(), v.end());
                    ans.insert(v);
                }
                mp[nums[i]] = i;
            }
        }
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
};