#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int mintime(int n,int a[],int p,map<int,int>period)
{
    int sum=0;
    sum = accumulate(a,a+n,sum);

    map<int,int>::iterator i;

    for(i= period.begin();i != period.end(); ++i)
    {
        if(i->first >= sum)
        {
            return i->first;
        }
        if(i->second >= sum)
        {
            return sum;
        }
        
    }
    return -1;

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p;
    cin>>p;
    map<int,int>period;
    for (int i = 0; i < p; i++)
    {
        int a, b;
        cin>>a;
        cin>>b;
        period.insert(pair<int,int>(a,b));
    }
    cout<<mintime(n,a,p,period);
    
    
    return 0;
}