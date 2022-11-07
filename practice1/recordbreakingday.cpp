#include <iostream>
using namespace std;


void solve()
{
    int n;
    
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int cnt =0;

    if(a[0]>a[1])
    {
        cnt++;
    }

    if(a[n-1]>a[n-2])
    {
        cnt++;
    }
    
    for (int i = 1; i < n-1; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    
}


int main()
{
    solve();
    return 0;
}