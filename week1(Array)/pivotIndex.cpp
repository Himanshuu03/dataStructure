class Solution {
public:
    // Method 1
    // int leftSideSum(vector<int>& nums,int start,int end){
    //     int sum=0;
    //     for(int i =start;i<end;i++){
    //         sum = sum +nums[i];
    //     }
    //     return sum;
    // }
    // int rightSideSum(vector<int>& nums,int start,int end){
    //     int sum=0;
    //     for(int i =start;i<end;i++){
    //         sum = sum +nums[i];
    //     }
    //     return sum;
    // }
    int pivotIndex(vector<int>& nums) {
        // int lSum = 0;
        // int rSum = 0;
        // for(int i =0;i<nums.size();i++){
        //     lSum = leftSideSum(nums,0,i);
        //     rSum = rightSideSum(nums,i+1,nums.size());
        //     if(lSum == rSum){
        //         return i;
        //     }
        // }
        // return -1;

        //Method 2
        vector<int>lside(nums.size(),0);
        vector<int>rside(nums.size(),0);
        for(int i =1;i<nums.size();i++){
            lside[i] = lside[i-1] + nums[i-1];
        }
        for(int i = nums.size()-2;i>=0;i--){
            rside[i] = rside[i+1] +nums[i+1];
        }
        for(int i =0;i<nums.size();i++){
            if(lside[i] == rside[i]) return i;
        }
        return -1;
    }
};
