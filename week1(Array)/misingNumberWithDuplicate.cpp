#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void visitedMethod(vector<int>arr){
    for(int i =0;i<arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }
    for(int i =0;i<arr.size();i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

void sortAndSwap(vector<int>arr){
    int index = 0;
    while(index < arr.size()){
        int position = arr[index] - 1;
        if(arr[position] == arr[index]){
            index++;
        }
        else{
            swap(arr[index],arr[position]);
        }
    }
    for(int i =0;i<arr.size();i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
}
int main()
{
    vector<int>arr{1,3,3,3,4};
    visitedMethod(arr);
    sortAndSwap(arr);
    
}
