class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start +(end - start)/2;
        // int minVal = INT_MAX;
        // while(start <= end){
        //     if(nums[start] <= nums[mid]){
        //         minVal = min(minVal,nums[start]);
        //         start = mid +1;
        //     }
        //     else{
        //         minVal = min(minVal,nums[mid]);
        //         end = mid -1;
        //     }
        //     mid = start +(end - start)/2;
        // }
        // return minVal;


        //Another method
        while(start <= end){
            if(start == end){
                return nums[0];
            }
            else if(mid+1 < nums.size() && nums[mid] > nums[mid+1]){
                cout<<"yes";
                return nums[mid+1];
            }
            else if(mid-1 >= 0 && nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            else if(nums[start] > nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return nums[0];
    }
};
