#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<endl;
            continue;
        }
        int count =0;
        if(a[0]>a[1])
        {
            count = a[0]-a[1];
            a[0] = a[1];
        }
        for (size_t i = 1; i < n-1; i++)
        {
            if(a[i]>a[i-1]&& a[i]>a[i+1])
            {
                int mx = max(a[i-1],a[i+1]);
                int diff= abs(mx-a[i]);
                a[i] = mx;
                count+=diff;
                

            }
        }
        if(a[n-1]>a[n-2])
        {
            count = count + a[n-1] -a[n-2];
        }
        count = count+a[0];
        for (int i = 1; i < n; i++)
        {
            int temp = a[i]-a[i-1];
            count = count+abs(temp);
        }
        
        
        count = count+a[n-1];
        cout<<count<<endl;
    }
    
}

int main()
{
    solve();
    return 0;
}
/*
1
0
1
1
1
2
1
3
1
4
1
5
2
0 0
*/