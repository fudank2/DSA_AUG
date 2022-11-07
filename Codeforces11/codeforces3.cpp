#include<iostream>
using namespace std;


void solve()
{
    int t;cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int s1=0,p1=0,storei=0,lasts =0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] =='*')
            {
                s1++;
                lasts = i;
                
            }
            else{
                p1++;
            }
            if(s1 ==1 && s[i] =='*')
            {
                s[i] = 'x';
            }
            if(s[i] =='x') storei = i;
            int curr = storei+k;
            if(curr>n-1)curr =n-1;
            bool check = true;
            if (s[i] =='x' && s[curr] !='x')
            {
                while (check)
                {
                    if(s[curr] =='*'&& check)
                    {
                        s[curr]='x';
                        lasts = i;
                        check = false;
                    }
                    curr--;
                }
                
            }
            
            
        }
       // s[lasts] = 'x';
        int totalx =0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='x') totalx++;
        }
        cout<<totalx<<endl;
    }
    
}



int main()
{
    solve();
    return 0;
}