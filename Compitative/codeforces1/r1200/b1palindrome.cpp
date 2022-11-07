#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin>>n>>s;
        int c0=0;
        for (int j = 0; j < n; j++)
        {
            if(s[j] == '0') c0++;
        }
        cout<<"BOB"<<endl;
        
    }
    
    return 0;
}