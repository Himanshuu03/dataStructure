class Solution {
public:
    void reverseArray(vector<int>& nums,int start,int end){
        int left = start;
        int right = end;
        while(start < end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        // for(int i=0;i<k;i++){
        //     int temp = nums[nums.size()-1];
        //     for(int j =nums.size()-1;j>0;j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = temp;
        // }

        //New - Better - Approch

        vector<int>arr(nums.size());

        for(int i=0;i<nums.size();i++){
            int index = (i + k) % nums.size();
            arr[index] = nums[i]; 
        }

        nums=arr;
        //Better - optimal approach
        // k = k % nums.size();
        // reverseArray(nums,0,nums.size()-1);
        // reverseArray(nums,0,k-1);
        // reverseArray(nums,k,nums.size()-1);
    }
};
