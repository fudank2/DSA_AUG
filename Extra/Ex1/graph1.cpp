#include<bits/stdc++.h>
using namespace std;
//adjacency list 
class graph
{
    public:
    //no of vertices
    int V;
    list<int>*v;
    graph(int a);
    void addEdge(int v1,int u1,bool bidir);
    void printedge(int sr);
};

graph::graph(int a)
{
    this->V=a;
    list<int>*v= new list<int>[a];
}
/* Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
} */

void graph::addEdge(int v1,int u1,bool bidir = true)
{
    if(bidir)
    {
        v[v1].push_back(u1);
        v[u1].push_back(v1);
    }
    else{
        v[v1].push_back(u1);
    }
}
void graph::printedge(int src)
{
    queue<int>q;
    //vector<bool>check={false};


    bool *check = new bool[V];
    for(int i = 0; i < V; i++)
        check[i] = false;


    q.push(src);
    check[src] = true;
    while (!q.empty())
    {
        int curr = q.front();
        cout<<curr<<" ->";
        q.pop();
        list<int>::iterator i;
        for(auto i= v[curr].begin();i!=v[curr].end();i++)
        {
            if(check[*i]==false)
            {
                q.push(*i);
                check[*i] = true;
            }
        }
    }
    
}


int main()
{
    graph g(5);
    g.addEdge(1,2);
    g.addEdge(3,2);
    g.addEdge(4,2);
    g.addEdge(1,4);
    g.addEdge(0,2);
    g.addEdge(1,0);
    g.printedge(0);
    return 0;
}