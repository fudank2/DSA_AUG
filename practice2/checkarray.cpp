#include<iostream>
using namespace std;

bool checkarr(int a[],int n)
{
    if(n==1)
    {
        return true;
    }

    return (a[0]<a[1]&& checkarr(a+1,n-1));
}

int main()
{
    int n =5;
    int a[] ={1,27,3,4,5};
    cout<<checkarr(a,n);
    return 0;
}