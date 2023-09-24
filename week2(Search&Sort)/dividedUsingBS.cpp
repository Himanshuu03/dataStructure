#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dividend,divisor;
    cin>>dividend;
    cin>>divisor;
    int start = 0;
    int end = abs(dividend);
    int mid = start +(end- start)/2;
    int ans = 0;
    while(start <= end){
        if(abs(divisor) * mid <= abs(dividend)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=start +(end- start)/2;
    }
    if((dividend > 0 && divisor <0) || (divisor > 0 && dividend < 0)){
        cout<< -(ans);
    }
    else{
        cout<<ans;
    }
    return 0;
}
