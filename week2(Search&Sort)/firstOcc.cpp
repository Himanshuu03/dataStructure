#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>arr,int target){
    int start = 0;
    int end = arr.size();
    int ans =0;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,2,3,3};
    cout<<firstOcc(arr,3);
}
