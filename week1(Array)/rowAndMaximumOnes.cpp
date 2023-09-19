class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int maxCount = INT_MIN;
        for(int i =0;i<mat.size();i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(maxCount < count){
                ans.clear();
                ans.push_back(i);
                ans.push_back(count);
                maxCount = count;
            }
        } 
        return ans;
    }
};
