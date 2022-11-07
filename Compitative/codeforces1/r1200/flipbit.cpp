#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int zeros =0,ones=0;
        for (int i1 = 0; i1 < count; i1++)
        {
            if(a[i1] == '1') ones++; 
            if(a[i1] == '0') zeros++; 
        }
        bool o,z;
        if(a[n-1]  =='1'){
            o = true;
        }
        if(a[n-1]  =='0'){
            z = true;
        }
        for (int i = n; i<=0; i--)
        {
            bool check = false;
            if((a[i] == '1'&& o)||(a[i] == '0' && !z))
            {
                check = true;
            }
        }
        
        
    }
}



int main()
{
    solve();
    return 0;
}