#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void obfuscation1(string s)
{
    int t=0;
    bool a[26] = {false};
    for (int i = 0; i <s.length(); i++)
    {
        int sn = (int)s[i] - 97;
        if (!a[sn] && sn<t)
        {
            cout<<"NO";
            return ;
        }
        a[sn] = true;
        t = max(t,sn);
    }
    cout<<"YES";
    
}

int main()
{
    string s;
    cin>>s;
    obfuscation1(s);
    return 0;
}
