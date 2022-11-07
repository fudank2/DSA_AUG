#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decode(int n, string s)
{
    int count1 = 0;
    int count0 = 0;
    vector<int>res;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            count1++;
            count0 = 0;
        }
        if(s[i] == '0')
        {
            count0++;
            
           if(count1>0){
            res.push_back(count1);}

            if(s[i+1] == '0')
            {
                res.push_back(0);l
            }

            count1=0;
        }

    }
    if(count1>0)
    {
        res.push_back(count1);
    }
    vector<int>::iterator j;
    for(j= res.begin();j != res.end();++j)
    {
        cout<<*j;
    }
}


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    decode(n,s);
    return 0;
}