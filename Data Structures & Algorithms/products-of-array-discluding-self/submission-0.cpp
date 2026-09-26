class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> prepro(n) ;
        prepro[0]=1 ;
        vector<int> suffpro(n) ;
        suffpro[n-1]=1 ;
        for( int i=1 ;i<n ;i++){
            prepro[i]=prepro[i-1]*nums[i-1] ;
            suffpro[n-i-1]=suffpro[n-i]*nums[n-i];
        }
        vector<int> ans(n);
        for(int i=0 ; i<n ;i++) ans[i]=prepro[i]*suffpro[i] ;
        return ans ;
    }
};
