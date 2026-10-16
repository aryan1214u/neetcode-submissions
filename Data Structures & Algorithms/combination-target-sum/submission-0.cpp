class Solution {
private:
void f(vector<int>& nums, vector<vector<int>>& ans, int i, vector<int>& curr, int& sum, int& target){
    if(sum > target) return ;
    if(sum==target){
        ans.push_back(curr); return ;
    }
    if(i>=nums.size() ){
        return ;
    }
    curr.push_back(nums[i]); 
    sum += nums[i];
    f(nums,ans,i,curr, sum, target);  
    curr.pop_back();     
    sum -= nums[i];
    f(nums,ans,i+1,curr, sum,target); 
    return ;
}
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans ;
        vector<int> curr ;
        int sum = 0;
        f(nums,ans,0,curr,sum,target);
        return ans ;
    }
};
