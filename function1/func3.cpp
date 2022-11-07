#include<iostream>
using namespace std;

void triplet(int a,int b,int c)
{
    if(a*a ==b*b+c*c || b*b ==a*a+c*c || c*c ==b*b+a*a ){
        cout<<" this is pollynomeal triplet";
        }
        /*
    else if(b*b ==a*a+c*c){
        cout<<" this is pollynomeal triplet";
        }
    else if(c*c ==b*b+a*a){
        cout<<" this is pollynomeal triplet";
        }
    */
    else{
        cout<<"entered number is not p.. triplet";
        }
}

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    //cout<<triplet(num1,num2,num3)<<endl;
    triplet(num1,num2,num3);
    return 0;
}