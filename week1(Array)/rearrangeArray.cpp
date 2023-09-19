class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>positiveEle;
        // vector<int>negativeEle;
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]>=0){
        //         positiveEle.push_back(nums[i]);
        //     }
        //     else{
        //         negativeEle.push_back(nums[i]);
        //     }
        // }
        // int pcount=0;
        // int ncount=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2 == 0){
        //         nums[i] = positiveEle[pcount++];
        //     }
        //     else{
        //         nums[i] = negativeEle[ncount++];
        //     }
        // }
        // return nums;


        //Second Approach
        vector<int>arr(nums.size());
        int pos = 0;
        int neg = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                arr[pos] = nums[i];
                pos +=2;
            }
            else{
                arr[neg] = nums[i];
                neg +=2;
            }
        }
        return arr;
    }
};
