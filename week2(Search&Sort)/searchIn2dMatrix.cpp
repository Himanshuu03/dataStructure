class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row*col -1;
        int mid = start + (end - start)/2;
        while(start <= end){
            int rowIndex = mid/col; // Ye ma bhul sakta hu
            int colIndex = mid%col; // Ye ma bhul sakta hu
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return true;
            }
            else if(target > element){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid= start +(end - start)/2;
        }
        return false;
    }
};
