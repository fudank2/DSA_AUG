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
    rep(t1,1,t+1)
    {
        int n;cin>>n;
        string s;cin>>s;
        char chand='J';
        bool fst =true;
        char backchar;
        int count=0;
        rep(i,0,n)
        {
            if(s[i]!='F')
            {
                if(fst)
                {
                    fst=false;
                    chand = s[i];
                }
                else{
                    if(chand!=s[i])
                    {
                        count++;
                        chand = s[i];
                    }
                }
            }
        }
        cout<<"Case #"<<t1<<": "<<count<<"\n";
    }
}


int main()
{
    solve();
    return 0;
}




