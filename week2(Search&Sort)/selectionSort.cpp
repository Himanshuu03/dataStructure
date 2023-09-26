#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>arr{55,44,33,22,11};
    int n = arr.size();
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
