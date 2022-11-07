#include<iostream>
using namespace std;

int binaryTodecimal(int n)
{
    int x,b1,temp1,b;
    x =1;
    b1 =0;
    while(n>0){
        temp1 = n%10;
        b = temp1*x;
        b1 = b1+b;
        x = x*2;
        n = n/10;
    }
    cout<<b1;
    return 0;
}

int main()
{
    int num;
    cin>>num;
    binaryTodecimal(num);
    return 0;
}