#include<iostream>
using namespace std;
int main()
{
    /*
    int arr[100]={2,7,5};
    cout<<"address of first index is : "<<arr<<endl;
    cout<<"address of first index using indexing of array  is : " <<&arr[0]<<endl;
    cout<<"address of secodn index is  :"<<&arr[1]<<endl;

    cout<<"next "<<*arr<<endl;
    cout<<"-->"<<*arr+1<<endl;
    cout<<"-->"<<*(arr+1)<<endl;
    

    int arr[10]={1,2,3};
    cout<<"address of first address is : "<<arr<<endl;
    // arr=arr+1;
    int *ptr = arr;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
*/
    char ch[6]="abcde";
    // cout<<ch;
    char *p = &ch[1];
    cout<<p<<endl;
    
    char temp ='a';
    char *p1 = &temp;
    cout<<p1<<endl;

    
}