#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    string village;
};

 int main()
 {
     int n;
     cin>>n;
     student a[n];
     for(int i=0; i<n; i++)
     {
         cout<<" name =";
         cin>>a[i].name;
         cout<<" age =";
         cin>>a[i].age;
         cout<<" village =";
         cin>>a[i].village;
     }
     cout<<" now we are going to print all data wich is given in the form of input"<<endl;
     for(int i =0; i<n; i++)
     {
        cout<<a[i].name<<" "<<endl;
        cout<<a[i].age<<" "<<endl;
        cout<<a[i].village<<" "<<endl;
     }
     
     return 0;
 }

