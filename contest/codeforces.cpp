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
    w(x)
    {
        int n;
        cin>>n;
        int a[n];rep(i,0,n)cin>>a[i];
        int q;cin>>q;
        vector<vector<int>>vc;
        rep(i,0,n)vc[0][i]=a[i];
        int reach =0;
        for(int i=0;i<q;i++)
        {
            int in,re;
            cin>>in>>re;
            if(re<=reach)
            {
                cout<<vc[re][in]<<"\n";
            }else
            {
                for(int k= reach+1;k<=re;k++)
                {
                    for(int l=0;l<n;l++)
                    {
                        int t = vc[re-1][l];
                        int count =0;
                        for(int l1=0;l1<n;l1++)
                        {
                            if(t==vc[re-1][l])count++;
                        }
                        vc[re][l] = count;
                    }
                }
                cout<<vc[re][in]<<"\n";
            }
        }

    }
}


int main()
{
    solve();
    return 0;
}





