#include<bits/stdc++.h>
using namespace std;


class dfsList
{

public:
    list<int>*adj;
    dfsList(int V);
    void DFS(int, bool reached[]);
};

dfsList::dfsList(int V)
{
   adj = new list<int>[V];
}
void dfsList ::DFS(int src, bool reached[]){
    reached[src]=true;
    cout<<src<<"\t";
    list<int> :: iterator i;
    for (i = adj[src].begin(); i!=adj[src].end(); i++)
    {
        if(reached[*i]==false)
            DFS(*i,reached);
    }
    
}
int main(){
    int v;
    cin>>v;
    int edges;
    cin>>edges;
    dfsList g(v);
    for ( int i = 0; i < edges; i++)
    {
        int x,y;
        cin>>x>>y;
        g.adj[x].push_back(y);
    }
    int src;
    cin>>src;
    bool *reached = new bool[v];
    for (int i = 0; i < v; i++)
    {
        reached[i] =false;
    }
    
    g.DFS(src,reached);
    
}
