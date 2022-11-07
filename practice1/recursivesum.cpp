#include <iostream>
using namespace std;


int summ(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    return n+summ(n-1);

}


int main()
{
    cout<<summ(7);
    return 0;
}