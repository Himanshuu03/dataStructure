class Solution {
public:

    double burteForce(vector<int>& nums, int k){
        int maxSum = INT_MIN;
        int j = k-1;
        int start = 0;
        while(j<nums.size()){
            int sum = 0;
            for(int i =start;i<=j;i++){
                sum = sum +nums[i];
            }
            maxSum = max(sum,maxSum);
            start++;
            j++;
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }

    double optimalSol(vector<int>& nums, int k){
        int maxSum = INT_MIN;
        int j = k-1;
        int start = 0;
        int sum = 0;
        for(int i=0;i<=j;i++){
            sum = sum + nums[i];   
        }
        maxSum = max(maxSum,sum);
        j++;
        while(j<nums.size()){
            sum = sum -nums[start++] + nums[j++];
            maxSum = max(maxSum,sum);
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }
    double findMaxAverage(vector<int>& nums, int k) {
        // return burteForce(nums,k);
        return optimalSol(nums,k);
    }
};
