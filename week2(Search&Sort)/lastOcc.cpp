#include <iostream>
#include <vector>
using namespace std;


int lastOcc(vector<int>arr,int target){
    int start = 0;
    int end = arr.size();
    int ans =0;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            ans = mid;
            start= mid+1;
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
    vector<int>arr{1,3,3,3,4};
    cout<<lastOcc(arr,3);
}
