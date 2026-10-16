class Solution {
private:
void f(vector<int>& nums, vector<vector<int>>& ans, int i, vector<int>& curr){
    if(i==nums.size()){
        ans.push_back(curr);
        return ;
    }
    curr.push_back(nums[i]);
    f(nums,ans,i+1,curr);
    curr.pop_back();
    f(nums,ans,i+1,curr);
    return ;
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> curr ;
        f(nums,ans,0,curr);
        return ans ;
    }
};
