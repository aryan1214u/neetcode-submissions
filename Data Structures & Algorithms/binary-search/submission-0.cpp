class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,low=0,high=nums.size()-1 ;
        int ans =-1 ;
        while(high>=low){
            mid = (high+low)/2;
            if(nums[mid]==target) {
                ans =mid ; break ;
            }
            else if(nums[mid]>target) high=mid-1;
            else low = mid+1 ;
        }
        return ans ;
    }
};
