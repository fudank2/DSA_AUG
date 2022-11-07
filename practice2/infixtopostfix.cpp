#include<iostream>
using namespace std;

int main()
{
    string s = "this is abcd";
    for(int i=0;i<s.length();i++)
        if(s[i]>='a' && s[i] <='d')
        {
            cout<<s[i];
        }
    }
    return 0;
}