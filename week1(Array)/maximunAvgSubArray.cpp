class Solution {
public:

    double burteForce(vector<int>& nums, int k){
        int maxSum = INT_MIN;
        int j = k-1;
        int start = 0;
        while(j < nums.size()){
            int sum = 0;
            for(int i=start;i <= j;i++){
                sum = sum +nums[i];
            }
            maxSum = max(sum,maxSum); 
            start++;//bhul gaya tha 
            j++;//bhul gaya tha
        }
        double maxAvg = maxSum /(double)k;
        return maxAvg;
    }

    double optimalSol(vector<int>& nums, int k){
        int maxSum = INT_MIN;
        int j = k-1;
        int start = 0;
        int sum = 0;
        for(int i=start;i<=j;i++){
            sum = sum +nums[i];
        }
        maxSum = max(sum,maxSum);
        j++;
        while(j<nums.size()){
            sum = sum - nums[start++] + nums[j];
            maxSum = max(sum,maxSum); 
            j++;
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }
    double findMaxAverage(vector<int>& nums, int k) {
        // return burteForce(nums,k);
        return optimalSol(nums,k);
    }
};
