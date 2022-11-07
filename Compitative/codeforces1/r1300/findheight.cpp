#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findboxHeight(int n, int w[], int W)
{
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = W;
    }
    
    int i=0;
    int k=0;

    
    while (k< n)
    {
        if(a[i]-w[k]>=0)
        {
            a[i] = a[i] - w[k];
            k++;
            i=0;
        }else
        {
            i++;
        }
    }
    int j=0;
    int h =0;
    while (a[j] <W)
    {
        h++;
        j++;
    }
    return h;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, W;
        cin >> n >> W;
        int w[n];
        for (int j = 0; j < n; j++)
        {
            cin >> w[j];
        }
        cout << findboxHeight(n, w, W) << endl;
    }

    return 0;
}