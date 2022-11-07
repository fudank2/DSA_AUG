#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isReasonable(int n,int t,int k, int d)
{
    int cakes =0;
    int time =0;
    bool maked = false;
    while (cakes<n)
    {
       cakes = cakes+k;
       time = time+t;
       
       if((d+t == time + t && cakes+2*k <=n)||(d+t<time+t && cakes+k ==n))
       {
           cakes = cakes+k;
           maked =true;
       }
       if(maked)
       {
        cout<<"YES";
        return;
       }

    }
    cout<<"NO";
    
}



int main()
{
    int n, t,k,d;
    cin>>n>>t>>k>>d;
    isReasonable(n,t,k,d);
    return 0;
}