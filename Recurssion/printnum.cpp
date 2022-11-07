#include<iostream>
using namespace std;
// printing number till n
int print(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevprint = print(n-1);
    return n;
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}