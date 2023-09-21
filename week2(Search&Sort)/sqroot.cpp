class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0){
            return x;
        }
        int start = 0;
        int end = x/2;
        long long int mid = start + (end-start)/2;
        int ans =0;
        while(start <= end){
            if(mid*mid > x){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
            mid= start+(end-start)/2;
        }
        return ans;
    }
};
