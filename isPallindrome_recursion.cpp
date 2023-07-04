#include<iostream>
using namespace std;

bool isPallindrome(string str,int i,int j)
{
    // base case
    if(i>j)
        return true;
    
    if(str[i]!= str[j])
    {
        return false;
    }
    else{
        return isPallindrome(str, i+1,j-1);
    }

}

int main()
{
    string str = "akkmka";
    bool ans = isPallindrome(str,0,str.length()-1);
    if(ans)
    {
        cout<<"it is pallindrome"<<endl;
    }
    else
        cout<<"not pallindrome"<<endl;
}