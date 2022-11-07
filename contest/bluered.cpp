#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll_ll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<ll, ll>
#define msll multiset<ll, ll>
#define usll unordered_set<ll>
#define umsll unordered_multiset<ll, ll>
#define mii map<int, int>
#define mll_ll map<long long, long long>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e9
#define n_inf -1e9
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define rep(x, a, b) for (int x = a; x < b; x++)
#define per(x, a, b) for (int x = a; x > b; x--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define IO                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    IO
    w(x)
    {
        int n;
        cin >> n;
        int a[n];
        rep(i, 0, n) cin >> a[i];
        string s;
        cin >> s;
        int b=0;
        rep(i, 0, n) if (s[i] == 'B') b++;
        int r = n - b;
        int B[b], R[r];
        int i1 = 0, i2 = 0;
        rep(i, 0, n)
        {
            if (s[i] == 'B')
            {
                B[i1] = a[i];
                i1++;
            }
            else
            {
                R[i2] = a[i];
                i2++;
            }
        }
        sort(R, R + r);
        sort(B, B + b);
        bool check = true;
        int count = 0;
        rep(i, 0, b)
        {
            count++;
            if (count > B[i])
            {
                check = false;
                break;
            }
                
        }
        if (check)
        {
            count = 0;
            for (int i = 0; i<r; i++)
            {
                count++;
                if (b+i+1<R[i])
                {
                    check = false;
                    break;
                }
                
                    
            }
        }
        if (check)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}





