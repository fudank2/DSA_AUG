#include <iostream>
using namespace std;


void solve()
{
    int n;
    cout<<"enter value of n ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int pd =a[1]-a[0];
    int mlength =0;
    int currlength =1;
    for (int j = 1; j < n-1; j++)
    {
       if(pd == a[j+1]-a[j])
       {
           currlength++;
       }
       else{
           currlength =1;
           pd = a[j+1]-a[j];
           cout<<" tested"<<endl;
           
       }
       
       mlength = max(currlength,mlength);
    }
    
    cout<<mlength+1;
}


int main()
{
    solve();
    return 0;
}