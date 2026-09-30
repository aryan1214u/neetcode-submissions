class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m = matrix[0].size();
        int low = 0 ;
        int high = n-1;
        int mid = high/2;
        int ans = -1 ;
        while(low<=high){
            mid = (low+high)/2 ;
            if(matrix[mid][0] <= target && matrix[mid][m-1] >= target){
                ans = mid ; break ;
            }
            else if(matrix[mid][0] > target) high=mid-1 ;
            else low = mid+1;
        }
        low = 0 ;
        if(ans==-1) return false ;
        high = m-1 ;
        int final =-1 ;
        while(low<=high){
            mid = (low+high)/2 ;
            if(matrix[ans][mid] == target) return true;
            else if(matrix[ans][mid] > target) high=mid-1 ;
            else  low=mid+1; 
        }
        return false ;
    }
};
