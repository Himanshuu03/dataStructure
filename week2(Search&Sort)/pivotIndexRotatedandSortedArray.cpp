#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findPivot(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(start == end){
            return start;
        }
        else if(mid+1 < arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(mid-1 >= 0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if(arr[start] > arr[mid]){
            end = mid-1;
        }
        
        //point to remenber <= because ther can be a duplicate
        
        else if (arr[start] <= arr[mid]){
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return 0;
}

int findPivot2(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start<=end){
        if(arr[start] <= arr[mid]){
            ans = max(ans,arr[mid]);
            start = mid+1;
        }
        else if(arr[start] > arr[mid]){
            ans = max(ans,arr[mid]);
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int binarySearch(vector<int>arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start +(end-start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}

int main()
{
    vector<int>arr{4,5,6,7,0,1,2};
    cout<<binarySearch(arr,findPivot2(arr));
    return 0;
}
