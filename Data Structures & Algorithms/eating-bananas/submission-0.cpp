class Solution {
private:
    bool f(vector<int>& piles, int k, int h){
        int ans =0 ;
        int n = piles.size() ;
        for(int i=0 ;i<n ; i++) ans+= (piles[i]-1 +k)/k ;
        if(ans<=h) return true ;
        else return false ;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = -1 ;
        int n = piles.size() ;
        for(int i=0 ;i<n ; i++) high = max(high,piles[i]);
        int low = 1;
        int ans = 1 ;
        int mid ;
        while(high>=low){
            mid = low + (high-low)/2;
            if(f(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }
            else low=mid+1;
        }
        return ans ;
    }
};
