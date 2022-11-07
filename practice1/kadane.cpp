#include<iostream>
using namespace std;

void kadane()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int localmax=0;
    int globalmax=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        localmax = max(a[i],a[i]+localmax);
        globalmax = max(globalmax,localmax);
    }
    cout<<globalmax;
    
    
}


int main()
{
    kadane();
    return 0;
}