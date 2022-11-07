#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    if(n==1){
        return true ;
    }
    bool restarray = sorted(a+1,n-1);
    return (a[0]<a[1]&&restarray);
}
int main(){
    int a[] = { 1,0,3,4,5,6};
    cout<<sorted(a,6);
    return 0;
}