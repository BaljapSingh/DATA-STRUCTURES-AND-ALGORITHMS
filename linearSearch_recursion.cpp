#include<iostream>
using namespace std;

bool solve(int *arr, int size, int k)
{
    //base case
    if(size == 0)
    {
        return false;
    }
    if(arr[0] == k)
    {
        return true;
    }

    return solve(arr+1,size-1,k);
}

int main()
{
    int arr[5]={1,4,7,8,5};
    int k = 11;
    bool ans = solve(arr,5,k);
    cout<<endl<<endl;
    if(ans)
    {
        cout<<"present"<<endl;
    }
    else    
        cout<<"not present"<<endl;
}