#include <iostream>
#include <vector>
using namespace std;

int searchInNearlySortedArray(vector<int>arr,int target){
    int size = arr.size();
    int start = 0;
    int end = size-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        else if(mid-1 >= 0 && arr[mid-1] == target){
            return mid-1;
        }
        else if(mid+1 < size && arr[mid+1] == target){
            return mid+1;
        }
        else if(target > arr[mid]){
            start = mid+2;
        }
        else{
            end = mid-2;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    vector<int>arr{20,10,30,40,60,50};
    cout<<searchInNearlySortedArray(arr,50);
    return 0;
}
