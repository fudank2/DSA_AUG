#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    cin>>n;
    int a[n];
   
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //cout<<*max_element(a,a+n);
    int c = *max_element(a,a+n);
    int b[c];
    for (size_t i = 0; i < c; i++)
    {
        b[i] = -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(b[a[i]] == -1)
        {
            b[a[i]] = i;
        }
        else
        {
            cout<<b[a[i]];
            break;
        }
    }
    
}


int main()
{
    solve();
    return 0;
}