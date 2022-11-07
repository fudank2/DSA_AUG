#include<bits/stdc++.h>
using namespace std; 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll_ll          pair<long long,long long>
#define vi              vector<int>
#define vll            vector<long long>
#define si             set<int>
#define sll             set<ll,ll>
#define msll            multiset<ll,ll>
#define usll             unordered_set<ll>
#define umsll           unordered_multiset<ll,ll>
#define mii             map<int,int>
#define mll_ll           map<long long,long long>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e9
#define n_inf	        -1e9
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(x,a,b)	for(int x = a; x < b; x++) 
#define per(x,a,b)	for(int x = a; x > b; x--)
#define yes cout << "YES"<<endl 
#define no cout << "NO"<<endl
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    IO
    int t;cin>>t;
    rep(t1,0,t)
    {
        int n;cin>>n;string s;cin>>s;
        int a[n]={0};
        bool check=true;
        char fb;
        char cc;
        int a1=0;
        rep(i,0,n)
        {
            if(s[i]=='O'||s[i]=='X')
            {
                if(check)
                {
                    fb=s[i];
                    check = false;
                }
                else
                {
                    cc=s[i];
                    a1=1;
                }

                if(cc!=fb&&a1!=0)
                {
                    fb=cc;
                    a[i]=1;
                }
                else{
                    a[i]-1;
                }
                
            }

        }
        int res=0;
        rep(i,5,n-1)
        {
            int res1=a[i];
            //res =a[i];
            rep(j,i+1,n)
            {
                res1 = res1+a[j];
                res=res+res1;
                //cout<<res1<<"z ";
            }

            break;
        }
        rep(i,0,n)cout<<a[i]<<" ";
        cout<<res<<" ";

    }
}


int main()
{
    solve();
    return 0;
}





