#include<iostream>
using namespace std;

class dukan{
    public:
    string obj;
    int price;
    bool cash;
    // making constructor for filling value in easy format
    dukan( string  ok, int p, bool c)
    {
        obj = ok;
        price = p;
        cash = c;
    }
    void printinfo()
    {
        
        if(cash == 1)
        {
            cout<<obj<<" is "<<price<<" Rs p/kg or object in  cash "<<endl;
        }
        else if(cash == 0)
        {
            cout<<obj<<" is "<<price<<" Rs p/kg or object in  borrow"<<endl;
        }
        
    }
};
int main()
{
    dukan a("Rice",38,true);
    dukan b("modal",70,0);
    dukan c("potto",20,1);
    a.printinfo();
    b.printinfo();
    c.printinfo();

    return 0;
}