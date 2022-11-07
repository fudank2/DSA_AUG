#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        mp.insert(pair<int,bool>(a,true));
    }
    for (int i = 0; i < n-1; i++)
    {
        int a;
        cin>>a;
        map<int,bool> :: iterator it;
        it = mp.find(a);
        it->second = false;
    }
    map<int,bool> :: iterator it1;
    int first_error;
    for (it1 = mp.begin(); it1!=mp.end();it1++)
    {
       if(it1->second)
       {
           first_error = it1->first;
           it1->second = true;
           break;
       }
    }
    for (int i = 0; i < n-2; i++)
    {
        int a;
        cin>>a;
        map<int,bool> :: iterator it3;
        it3 = mp.find(a);
        it3->second = true;
    }
    map<int,bool> :: iterator it2;
    int second_error;
    for (it2 = mp.begin(); it2!=mp.end();it2++)
    {
       if(!it2->second)
       {
           second_error = it2->first;
           it2->second = false;
           break;
       }
    }
    ;
    cout<<first_error<<" "<<second_error;

    
    return 0;
}