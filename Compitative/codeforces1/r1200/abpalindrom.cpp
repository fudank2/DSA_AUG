#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int n = a + b - 1;
        string s;
        cin >> s;
        bool f = false;
        for (int i = 0; i <= n; i++)
        {
            if (s[i] != s[n - i] && (s[i] != '?' && s[n - i] != '?'))
            {
                f = true;
                cout << "-1" << i << endl;
                break;
            }
            if (s[i] == '?' && s[n - i] == '?' && i != n - i)
            {
                if (a > b)
                {
                    s[i] == '0';
                    s[n - i] = '0';
                    a = a - 2;
                    //cout<<"1 ";
                }
                else if (b > a)
                {
                    s[i] == '1';
                    s[n - i] = '1';
                    b = b - 2;
                     //cout<<"2 ";
                }
            }
            if ((s[i] == '?' && s[n - i] == '1') || (s[i] == '1' && s[n - i] == '?'))
            {
                s[i] = '1';
                s[n - i] = '1';
                b = b - 2;
                // cout<<"3 ";
            }
            else if ((s[i] == '?' && s[n - i] == '0') || (s[i] == '0' && s[n - i] == '?'))
            {
                s[i] = '0';
                s[n - i] = '0';
                a = a - 2;
                // cout<<"4 ";
            }
            /* if (a < 0 || b < 0)
            {
                f = true;
                cout << s << endl;
                cout << "-1" << a << " " << i << endl;
                break;
            } */
            if (a + b > 0 && i == n - i)
            {
                if (a > 0)
                    s[i] = '0';
                if (b > 0)
                    s[i] = '1';
            }
        }
        if (!f)
        {
            cout << s << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}