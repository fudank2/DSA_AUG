#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int>arr[n];
    int h[n];
    int sumValue =0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i] = make_pair(a,b);
        h[i] = b;
        sumValue +=a;

    }
    sort(h,h+n);
    for (int i = 0; i < n; i++)
    {
        int width = sumValue - arr[i].first;
        int height = arr[i].second;
        if(height == h[n-1]){
            height = h[n-2];
        }
        else
        {
            height = h[n-1];
        }
        
        cout<<width*height<<" ";

    }
    
    return 0;
}