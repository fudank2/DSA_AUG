#include<iostream>
using namespace std;
//adding a number between 1 to n

int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n+prevsum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}