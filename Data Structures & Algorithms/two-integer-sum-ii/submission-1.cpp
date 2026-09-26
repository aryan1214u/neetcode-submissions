class Solution {
private:
    int bs(vector<int>& numbers, int t, int l, int r){
        while(l <= r){
            int mid = (l+r)/2;

            if(numbers[mid] == t) return mid;
            if(numbers[mid] > t) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }

public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for(int i=0; i<n; i++){
            int t = target-numbers[i];

            if(i > 0 && i < n-1) {
                int x = bs(numbers,t,0,i-1);
                if(x != -1) return {x+1,i+1};

                x = bs(numbers,t,i+1,n-1);
                if(x != -1) return {i+1,x+1};
            }
            else if(i == 0) {
                int x = bs(numbers,t,1,n-1);
                if(x != -1) return {i+1,x+1};
            }
            else {
                int x = bs(numbers,t,0,n-2);
                if(x != -1) return {x+1,i+1};
            }
        }

        return {-1,-1};
    }
};