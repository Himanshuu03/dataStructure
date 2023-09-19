class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int arrSum = 0;
        // for(int i=0;i<nums.size();i++){
        //     arrSum = arrSum+nums[i];
        // }
        // return (((nums.size()+1)*nums.size())/2)-arrSum;

        
        //another soln
        int ans = 0;
        for(int i =0;i<nums.size();i++){
            ans = ans^nums[i]^i;
        }
        return ans^nums.size();
    }
};
