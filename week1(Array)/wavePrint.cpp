#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< vector<int> >arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,15}
    };
    
    for(int i=0; i<arr[0].size();i++){
        if(i%2 == 0){
            for(int j =0;j<arr.size();j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = arr.size()-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    
}
