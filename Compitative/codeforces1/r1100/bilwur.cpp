#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int minStep(int n,int a[])
{
    int mx = *max_element(a,a+5);
    bool mxbool = false;
    int CountStep =a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i-1]<a[i])
        {
            CountStep += a[i]-a[i-1];
        }
         if(a[i-1]>a[i] )
        {
            CountStep += a[i-1]-a[i];
        } 
    }
    return CountStep;
    
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<minStep(n,a);
    return 0;
}