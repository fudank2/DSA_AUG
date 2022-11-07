//H, 2B, 3B, or HR.
#include <iostream>
using namespace std;

void solve()
{
    string a[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int b[4] = {0};
    for (int i = 0; i < 4; i++)
    {

        if (a[i] == "H")
        {
           b[0] = 1;
        }
        if (a[i] == "2B")
        {
           b[1] = 1;
        }
        if (a[i] == "3B")
        {
           b[2] = 1;
        }
        if (a[i] == "HR")
        {
           b[3] = 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if(b[i]==0)
        {
            cout<<"No";
            return ;
        }
    }
    cout<<"Yes";
    
}

int main()
{
    solve();
    return 0;
}