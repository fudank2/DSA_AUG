// A normal IO example code
#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    IO
    int t1;cin>>t1;
    while(t1--)
    {
        int n;cin>>n;
        string  A[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        
        char a,b,c,d;
        a = A[1][0];
        b = A[0][1];
        c = A[n-1][n-2];
        d = A[n-2][n-1];
        //cout<<"loop"<<t1<<endl;
        //cout<<a<<b<<c<<d;
        if(a ==b&&c==d&&a==c)
        {
            cout<<"2"<<"\n";
            cout<<"2"<<" "<<"1"<<"\n";
            cout<<"1"<<" "<<"2"<<"\n";
            
            continue;
        }
        if(a==b && c==d)
        {
            cout<<"0"<<"\n";
            continue;
        }
        else if(a ==b&&b==d && c !=d)
        {
            cout<<"1"<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            continue;
        }
        if(a ==b&&b==c&& c==!d)
        {
            cout<<"1"<<"\n";
            cout<<n<<" "<<n-1<<"\n";
            continue;
        }
        if(a==c&&c==d&&a!=b)
        {
            cout<<"1"<<"\n";
            cout<<"2"<<" "<<"1"<<"\n";
            continue;
        }
        if(b==c&&c==d && b!=a)
        {
            cout<<"1"<<"\n";
            cout<<"1"<<" "<<"2"<<"\n";
            continue;
        }
        if(a==d&&b==c)
        {
            cout<<"2"<<"\n";
            cout<<"0"<<" "<<"1"<<"\n";
            cout<<n<<" "<<n-1<<"\n";
            continue;
        }
        if(a==c&&b==d)
        {
            cout<<"2"<<"\n";
            cout<<"0"<<" "<<"1"<<"\n";
            cout<<n<<" "<<n-1<<"\n";
            continue;
        }
        
        
    }
   
}


int main()
{
	solve();
	return 0;
}
