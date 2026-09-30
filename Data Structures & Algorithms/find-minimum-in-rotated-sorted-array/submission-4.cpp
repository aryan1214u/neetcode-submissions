class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0, high =nums.size()-1 ;
        if(nums[low] <= nums[high/2] && nums[high/2]<=nums[high]){
            return nums[low];
        }
        int mid ;
        int ans =200000;
        while(low<=high){
            mid = (low+high)/2 ;
            if( nums[high] <= nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else if( nums[mid] <= nums[high]){
                ans=min(ans,nums[mid]);
                high=mid;
            }
        }
        return ans ;
    }
};
