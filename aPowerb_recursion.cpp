#include<iostream>
using namespace std;

int power(int a,int b)
{
    //base case
    // if power is 0 return 1
    if(b == 0 )
        return 1;   
    
    //if power is 1 return same elemetn
    if(b == 1)
        return a;
    //recursive call
    int ans = power(a,b/2);

    if(b%2  ==0)// even power
        return ans*ans;
    else
        return a*ans*ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);

    cout<<ans<<endl;
}