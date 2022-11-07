#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* #include<iostream>
using namespace std;
 */
void solve()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long int s=0;
        if(n==1)
        {
            s = a[0]*2*1LL;
            cout<<s<<endl;
            return;
        }
        if(a[0]>a[1])
        {
            s = a[0]-a[1];
            a[0] = a[1];
        }
        if(a[n-2]<a[n-1])
        {
            s = s+a[n-1]-a[n-2];
            a[n-1] = a[n-2];
        }
        for (int i = 1; i < n-1; i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                int mx = max(a[i-1],a[i+1]);
                s = s*1LL+a[i]-mx;
                a[i] = mx;
            }
        }
        long long int s1 = a[0]+a[n-1];
        for (int i = 0; i < n-1; i++)
        {
            s1 = s1*1LL + abs(a[i]-a[i+1]);
        }
        cout<<s+s1<<endl;
        
    }
    
}

int main()
{
    solve();
    return 0;
}


