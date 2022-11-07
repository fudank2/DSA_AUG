#include <iostream>
using namespace std;


void summ(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    summ(n-1);

}


int main()
{
    summ(5);
    return 0;
}