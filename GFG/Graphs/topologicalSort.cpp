#include <bits/stdc++.h>
using namespace std;

class dfsList
{

public:
    list<int> *adj;
    dfsList(int V);
    void DFS(int, bool reached[]);
    void topoSort(int[],int);
};

dfsList::dfsList(int V)
{
    adj = new list<int>[V];
}
void dfsList ::DFS(int src, bool reached[])
{
    reached[src] = true;
    cout << src << "\t";
    list<int>::iterator i;
    for (i = adj[src].begin(); i != adj[src].end(); i++)
    {
        if (reached[*i] == false)
            DFS(*i, reached);
    }
}
void dfsList::topoSort(int in[],int v) {
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if(in[i]==0) q.push(i);
    }
    while(!q.empty()){
        int x =q.front();
        q.pop();
        cout<<x<<" ";
        list<int> :: iterator i;
        for ( i = adj[x].begin(); i!=adj[x].end(); i++)
        {
            in[*i]--;
            if(in[*i]==0) q.push(*i);
        }
        
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
int main()
{
    int v;
    cin >> v;
    int edges;
    cin >> edges;
    dfsList g(v);
    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        g.adj[x].push_back(y);
    }
    int indegree[v] = {0};
    list<int>::iterator i;
    for (int j = 0; j < v; j++)
    {
        for (i = g.adj[j].begin(); i != g.adj[j].end(); i++)
        {
            indegree[*i]++;
        }
    }
    // for (int l = 0; l < v; l++) 
    // {
    //     cout<<indegree[l]<<" ";
    // }
    cout<<endl;
    g.topoSort(indegree,v);
    
    
}