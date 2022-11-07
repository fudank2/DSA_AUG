#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void isEntered(int n, int k, string s)
{
    int a[26]= {0};
    bool Codoor[26] = {false};

    for (int i = 0; i <n; i++)
    {
        a[((int)s[i]-65)]++;
    }

    for (int i = 0; i < n; i++)
    {
        Codoor[((int)s[i]-65)] = true;
        int open =0;
        for(char j= 0; j < 26;j++)
        {
            if(Codoor[j] && a[((int)s[j]-65)]>0)
            {
            open = open +1;
            }
        }
        
        if(open>k)
        {
            cout<<"YES";
            return;
        }
        
        
        if(a[((int)s[i]-65)]>0)
        {
            a[((int)s[i]-65)]--;
        }

    }
    cout<<"NO";
    


}


int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    isEntered(n,k,s);
    return 0;
}


