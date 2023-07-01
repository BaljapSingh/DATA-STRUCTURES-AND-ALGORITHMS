#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    //base case
    if(n == 0)
        return 0;
    
    if(n == 1)
        return arr[0];
    
    return arr[0] + getSum(arr+1,n-1);
}

int main()
{
    int arr[5] = {5,7,4,1,2};
    int ans = getSum(arr,5);
    cout<<ans<<endl;
}