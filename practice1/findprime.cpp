#include <iostream>
using namespace std;


void solve()
{
    //finding prime no between 1-n
    int n;
    cin>>n;
    int primarr[n] = {0};
    for (int i = 2; i < n; i++)
    {
        for(int j =i*i;j<n;j+=i)
        {
            primarr[j] = 1;
        }
    }
    for(int i =2;i<n;i++)
    {
        if(primarr[i] !=1)
        {
            cout<<i<<" ";
        }
    }
    
}


int main()
{
    solve();
    return 0;
}