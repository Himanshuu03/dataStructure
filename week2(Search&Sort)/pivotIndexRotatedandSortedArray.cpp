#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(start == end){
            return start;
        }
        if(arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[mid-1]){
            return mid-1;
        }
        else if(arr[start] > arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    vector<int>arr{12,14,16,2,4,6,8,10};
    cout<<pivotElement(arr);
}
