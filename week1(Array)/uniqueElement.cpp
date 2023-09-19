#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2,2,3,4,5,3,4,5,1};
    int size = sizeof(arr)/sizeof(int);
    int ans= 0;
    for(int i=0;i<size;i++){
        ans ^= arr[i];
    }
    cout<<ans;
    return 0;
}
