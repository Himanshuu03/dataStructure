#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int row = arr.size();
    int col = arr[0].size();
    
    for(int i =0;i<row;i++){
        for(int j = i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
