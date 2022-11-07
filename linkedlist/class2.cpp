#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    string village;
    public:
   
    void setdata(string n,int a, string v)
    {
        name = n;
        age = a;
        village = v;
    }
    void getdata()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"village = "<<village<<endl;
    }

};


int main()
{
    student a;
    a.setdata("fgy",66," 77");
    a.getdata();

    return 0;

}

