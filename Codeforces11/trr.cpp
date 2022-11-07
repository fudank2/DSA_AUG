#include<iostream>
using namespace std;

int main()
{

    string s;
    getline(cin,s);
    int n=s.length();
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == ' ')res++;
        
        if(res>1)s.erase(i);
        if(s[i]!=' ')res=0;
    }
    cout<<s<<endl;
    return 0;
}