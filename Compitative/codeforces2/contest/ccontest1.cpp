#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void solve()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char bool>v1;
       
       for (int j = 0; j < n-1; j++)
       {
           if(v1[s[j]] == true)
           {
               cout<<"NO"<<endl;
           }
           if(s[j] != s[j+1])
           {
               v1[s[j]] = true;
           }
       }
       if(v1[s[n-1]]  == true)
       {
           cout<<"NO"<<endl;
       }
       else 
       {
           cout<<"YES"<<endl;
       }
       


    }
    
}

int main()
{
    solve();
    return 0;
}