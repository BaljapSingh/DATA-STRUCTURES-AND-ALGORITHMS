#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr, int s,int e)
{
    int mid = s + (e-s)/2;
    vector<int> temp;
    int left = s;
    int right = mid+1;

    while(left <= mid && right <= e)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=e)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=s;i<=e;i++)
    {
        arr[i] = temp[ i - s];
    }

}

void mergeSort(int *arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = s + (e-s)/2;
    // sort left part
    mergeSort(arr, s, mid);

    // sort right part
    mergeSort(arr, mid+1, e);

    merge(arr, s,e);
}

int main()
{
    int arr[5] = {8,7,54,9,4};
    mergeSort(arr,0,4);
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}