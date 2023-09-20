#include <iostream>

using namespace std;

int main()
{
    int arr[] ={1,2,3,4,5};
    int target = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        
        if(arr[mid] == target){
            cout<<"Target found";
            break;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
}
