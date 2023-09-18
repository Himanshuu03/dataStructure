class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int startingrow = 0;
        int endingrow = matrix.size()-1;
        int startingcol = 0;
        int endingcol = matrix[0].size()-1;
        int count = 0;
        int totalCount = matrix.size() * matrix[0].size();
        cout<<totalCount;

        while(count < totalCount){
            for(int i=startingcol;i<=endingcol && count<totalCount ;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            for(int i= startingrow;i<=endingrow && count<totalCount ;i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            for(int i=endingcol;i>=startingcol && count<totalCount ;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            for(int i =endingrow;i>=startingrow && count<totalCount ;i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }
};
