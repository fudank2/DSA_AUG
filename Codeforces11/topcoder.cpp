#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define pi 3.141592653589793238462643383279
#define mod 1e9+7
#define Fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pll pair<long long ,long long>
#define mk make_pair
#define psieve void sieve(){ memset(prime, true, sizeof(prime)); for(ll p=2; p*p<=maxn; p++) if (prime[p]) for (ll i=p*2; i<=maxn; i+= p) prime[i] = false; }
#define all(x) x.begin(),x.end()
#define sii set<in>
#define vec vector<long long>
#define f0(i,n) for(long long i=0;i<n;i++)
#define f1(i,n) for(long long i=1;i<=n;i++)
 int gcd(int a, int b) {
if (!a || !b) return a | b;
unsigned shift = __builtin_ctz(a | b);
a >>= __builtin_ctz(a);
do {
b >>= __builtin_ctz(b);
if (a > b)
swap(a, b);
b -= a;
} while (b);
return a << shift;
}
 
 
 
int main() 
{
Fastio
int t;
cin>>t;
while(t--)
{
 int a,b,c;
 cin>>a>>b>>c;
//  ll x1=1;
//  for(int i=1;i<c;i++)
//  {
//      x1=x1*10;
 
//  }
//  x1+=1;
//  ll temp1=(pow(10,a-1));
//  ll temp2=(pow(10,b-1));
//  ll x=temp1+(x1-temp1%x1);
//  ll y=temp2+(x1-temp2%x1);
//  cout<<x<<" "<<y<<endl;}
cout<<"1";
for(int i=1;i<=a-1;i++)
{
    cout<<"0";
}
cout<<" ";
//cout<<"101";
for(int i=1;i<=b-c+1;i++)
{
    cout<<"1";
}
for(int i=1;i<=c-1;i++)
{
    cout<<"0";
}
cout<<endl;
}
return 0
}