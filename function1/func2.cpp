#include<iostream>
using namespace std;

int fact(int a){
    int ret =1;
    int ret1;
    for(int i =1; i<=a; i++){
         ret1 =ret*i;
         ret = ret1;
    }
    return ret1;
}


int main(){
    int num;
    cin>>num;
    cout<<fact(num);
    return 0;
}