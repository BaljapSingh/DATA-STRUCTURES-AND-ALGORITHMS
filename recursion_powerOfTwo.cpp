// 2^5 = 2 * 2^4  [2 * power(n-1)]

#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }

    return 2* power(n-1);
}

int main()
{
    cout<< power(3) <<endl;

}