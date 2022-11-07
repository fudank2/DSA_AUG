#include <iostream>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t[q];
    for (size_t i = 0; i < q; i++)
    {
        cin >> t[i];
    }
    for (size_t i = 0; i < q; i++)
    {
        int currcolor = t[i];
        int j;
        for ( j = 0; j < n; j++)
        {
            if(a[j]== currcolor)
            {
                break;
            }
        }
        cout<<j+1<<" ";
        for (int k = j; k >0; k--)
        {
            a[k] = a[k-1];
        }
        a[0] = currcolor;
        
    }
}

int main()
{
    solve();
    return 0;
}