class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //Method 1
        // int j = 0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] != nums[i+1]){
        //         nums[j++] = nums[i];
        //     }
        // }
        // nums[j++] = nums[nums.size()-1];
        // return j;

        //Method 2
        int i =1,j=0;
        while(i<nums.size()){
            if (nums[i] == nums[j]) i++;
            else nums[++j] = nums[i++] ;
        }
        return j+1;
    }
};
