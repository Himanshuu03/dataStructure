class Solution {
public:
    void sortColors(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        int index = 0;
        while(index<=right){
            if(arr[index] == 0){
                swap(arr[left++],arr[index++]);
            }
            else if(arr[index] == 2){
                swap(arr[right--],arr[index]);
            }
            else{
                index++;
            }
        }
    }
};
