#include<iostream>
using namespace std;

void sayNumber(int n,string *arr)
{
    if(n == 0)
    {
        return;
    }
    int digit = n%10;
    n = n/10;
    sayNumber(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;
    string arr[10] = {"zero", "one", "two", "three","four", "five", "six", "seven", "eight", "nine"};

    sayNumber(n,arr);
}