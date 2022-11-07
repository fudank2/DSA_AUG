#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isReasonable(int n,int t,int k, int d)
{
    if(ceil((d+t)/t)*k <n)
    {
        cout<<"YES";
        
    }
    else
    {
        cout<<"NO";
    }
    
    
}



int main()
{
    int n, t,k,d;
    cin>>n>>t>>k>>d;
    isReasonable(n,t,k,d);
    return 0;
}