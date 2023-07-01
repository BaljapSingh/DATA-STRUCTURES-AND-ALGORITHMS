#include<iostream>
using namespace std;

void print(int *arr, int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int *arr, int s,int e,int k)
{
    print(arr, s,e);
    //base case
    if(s>e)
        return false;

    int mid = s+ (e-s)/2;

    if(arr[mid] == k)
        return mid;
        

    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
    else
    {
        return binarySearch(arr,s,mid-1,k);
    }    
}

int main()
{
    int arr[6] = {2,4,9,10,14,16};
    int k = 1;
    
    bool ans = binarySearch(arr,0,5,k);
    cout<<"present or not"<<endl;
    cout<<ans<<endl;
}