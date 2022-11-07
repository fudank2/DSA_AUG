#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void insertdata(Node*&root,int val)
{
    Node*n = new Node(val);
}





int main()
{
    return 0;
}