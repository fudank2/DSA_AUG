#include <iostream>
using namespace std;
int sum(int a)
{
    int var1 = 0;
    for (int i = 1; i <= a; i++)
    {
        var1 = var1 + i;
    }
    return var1;
}

int main()
{
    int long num1;
    cin >> num1;
    cout << sum(num1);
    return 0;
}