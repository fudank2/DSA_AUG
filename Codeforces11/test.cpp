#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int t=0,m=0;
        bool printed = false;
        for (int i = 0; i < n; i++)
        {
            if(t<m)
            {
                cout<<"NO"<<endl;
                printed = true;
                break;
            }
            if(s[i] == 'T') t++;
            if(s[i] == 'M') m++;
        }
        int t1=0,m1=0;
        for (int i = n-1; i > 0; i--)
        {
            if(t1<m1 && !printed)
            {
                cout<<"NO"<<endl;
                printed = true;
                break;
            }
            if(s[i] == 'T') t1++;
            if(s[i] == 'M') m1++;
        }
        if(2*m == t && !printed)
        {
            cout<<"YES"<<endl;
        }
        else if(!printed){
            cout<<"NO"<<endl;
        }
        
    }

}

int main()
{
    solve();
    return 0;
}