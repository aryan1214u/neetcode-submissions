class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int maxarea = 0 ;
        int high = height.size() -1;
        while ( high >= low){
            int a =   min(height[low], height[high]) ;
            int area = a*(high-low) ;
            maxarea = max( maxarea , area   ) ;
            if ( height[high] > height[low])low++;
            else high--;
        }
        return maxarea ;
    }
};