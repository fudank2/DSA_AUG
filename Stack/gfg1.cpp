
#include<bits/stdc++.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

/* 
int findtriplet(int a[], int n)
{
    sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=a[i]+a[j]+a[k];
            if(sum==0)
            return true;
            else if(sum>0)
            k--;
            else
            j++;
        }
    }
    return false;
} */


int main()
{
    
    int a[] = {97, -27, 2, -34, 61, -39};
    sort(a, a+6);
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
