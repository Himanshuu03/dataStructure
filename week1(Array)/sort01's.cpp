#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr{1,0,0,0,1,1,0,1};
    int size = arr.size();
    int left = 0;
    for(int i =0;i<size;i++){
        if(arr[i]==0){
            swap(arr[i],arr[left++]);
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
