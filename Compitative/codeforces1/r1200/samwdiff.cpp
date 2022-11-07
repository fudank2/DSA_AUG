#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//std::uint64_t;
#define fo(i, k, n) for (i = k; i < n; i++)


void multiply(int a, int b)
{
    vector<int> A;
    vector<int> B;
    int i = 0;
    int j = 0;
    while (a)
    {
        A.push_back((a % 10));

        i++;
        a = a / 10;
    }
    while (b)
    {
        B.push_back((b % 10));
        j++;
        b = b / 10;
    }

    int len_a = A.size();
    int len_b = B.size();
    A.reserve(len_a);
    B.reserve(len_b);
    int ans[len_b + len_a];
    for (int kk = 0; kk < len_b + len_a; kk++)
    {
        ans[kk] = 0;
    }
    //cout<<len_a;
    int l;
    for (int k = len_b - 1; k >= 0; k--)
    {
        int adder = 0;

        for (l = len_a - 1; l >= 0; l--)
        {

            int mult = A[l] * B[k];
            ans[l + k + 1] = ans[l + k + 1] + adder + mult % 10;
            adder = mult / 10;
            if (l == 0)
            {
                ans[l + k] = adder;
            }
        }
        ans[l + k] = adder;
    }

    int ask = 0;
    for (int i1 = 0; i1 < len_b + len_a; i1++)
    {
        if (ans[i1] > 0)
        {
            ask = 1;
        }
        if (ask == 1)
        {
            cout << ans[i1];
        }
    }
}

void noOfSamediff(int n, int a[])
{
    map<int,int>m;
    int i;
    int c;
    long long int  res =0  ;
    fo(i, 0, n)
    {
       m[i-a[i]]++;
    }
    map<int, int>::iterator it;
    
    for(it= m.begin();it != m.end();++it)
    {
        res = res + (c*(c-1))/2;
    }
    printf("%2lu",res);
    //return res;
}

int main()
{
    int t =1;
    //cin >> t;
    int i, j;
    fo(i, 0, t)
    {
        int n = 200000;
        //cin >> n;
        int a[n];
        fo(j, 0, n)
        {
            int inp;
            //cin>>inp;
            a[j] = j;
            
        }
        //oOfSamediff(n, a);
        multiply(5,3);
        //long long int i = 100000*199999;
        //cout<<i;
    }
    return 0;
}
 



