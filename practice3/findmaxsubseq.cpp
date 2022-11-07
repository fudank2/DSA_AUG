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
// in this program i'm going to find maximum equal subsequence between two string

int  maxsub(string a,string b,int i=0,int j=0)
{
    int res = 0;
    if(a.length()==0||b.length()==0)res = 0;
    
    if(a[i]==b[j]&&(a.length()>i&&b.length()>j))
    {
        res =maxsub(a,b,i+1,j+1)+1;
    }
    int r1=0,r2=0;
    if(b.length()>j-1)r1= maxsub(a,b,i,j+1);
    if(a.length()>i-1)r2= maxsub(a,b,i+1,j);
    res = max(r1,r2);
    return res;
}





int main()
{
    string a,b;cin>>a>>b;
    cout<<maxsub(a,b,0,0);
    return 0;
}





