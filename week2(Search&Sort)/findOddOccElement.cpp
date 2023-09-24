#include <iostream>
#include <vector>
using namespace std;

int findOddOccElement(vector<int>arr){
    int size = arr.size();
    int start = 0;
    int end = size-1;
    int mid = start +(end-start)/2;
    while(start <= end){
        
        if (start == end) {
            return start;
        }
        
        else if((mid & 1) == 0){
            if(mid+1 < size && arr[mid] == arr[mid+1]){
                start = mid+2;
            }
            else{
                end = mid;
            }
        }
        
        else {
            if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    vector<int>arr{1,1,5,5,2,2,3,3,2,4,4};
    cout<<findOddOccElement(arr);
}
