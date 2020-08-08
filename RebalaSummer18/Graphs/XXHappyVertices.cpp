#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dfs(vector<ll> adj[], int src, bool visited[]) {
    visited[src]=true;
    stack<int> q;
    q.push(src);
    vector<ll> ::iterator i;
    int count =0;
    while(!q.empty()){
        int  p =q.top();
        q.pop();
    for (i = adj[p].begin(); i!=adj[p].end(); i++)
    {

        if (visited[*i]== false) {
            if(*i == p)
            if (adj[p].size()< adj[*i].size()-1) count++;
            else if(adj[p].size()< adj[*i].size()) count++;
            visited[*i]= true;
            q.push(*i);
            dfs(adj, *i,visited);
        }
    }
    }
    return count;

}
void addEdge(vector<ll> adj[], int x, int y) {
    adj[x].push_back(y);
    adj[y].push_back(x);
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<ll> adj[n];
    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin>>x>>y;
        addEdge(adj, x-1, y-1);
    }

    bool visited[n] ={ 0 };
    int count =0;
    for (int i=0;i<n;++i) {
        if (visited[i]==false)
            count+=dfs(adj, i, visited);
    }
    cout<<count<<endl;



}