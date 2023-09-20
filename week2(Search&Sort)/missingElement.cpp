#include <iostream>
#include <vector>
using namespace std;

int missingEle(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int ans = 0;
    while(start <= end){
        if(arr.size() == arr[end]){
            ans = arr.size()+1;
            break;
        }
        int mid = start + (end-start)/2;
        if(arr[mid] - mid == 1){
            start = mid+1;
        }
        else if(arr[mid] -mid == 2){
            ans = arr[mid]-1;
            end = mid -1;
        }
    }
    return ans;
}

int main()
{
    vector<int>arr{1,2,3,4,5,7,8};
    cout<<missingEle(arr);
}
