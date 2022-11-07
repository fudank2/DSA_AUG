#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int sqr(int a,int b)
{
    long long int res =(a*a)+(b*b);
    return res;
}
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int n1 = 2*n;
        
        vector<int> x;
        vector<int> y;
        
        while (n1--)
        {
           int a,b;
           cin>>a>>b;
           if(a ==0)
           {
               if(b<0)
               {
                   b = -1*b;
               }
               y.push_back(b);
              
           }
           if(b ==0)
           {
               if(a <0)
               {
                   a = -1*a;
               }
               x.push_back(a);
              
           }
        }
        assert((int) x.size() == n);
        assert((int) y.size() == n);
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        
        double ans =0;
        for(int i =0;i<n;i++)
        {
            ans += sqrt(x[i] * 1LL * x[i] + y[i] * 1LL * y[i]);
        }
        
        cout<<setprecision(17)<<ans<<endl;
        
    }
}



int main()
{
    solve();
    return 0;
}