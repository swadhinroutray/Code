#include<bits/stdc++.h>
#define ll long long
using namespace std;


int bfs(vector<ll>adj[], int n, int dis[]) {
    queue<int> q;
    // int dis[n] ={0};
    q.push(0);
    dis[0]=0;
    vector<int> res;
   bool visited[n] ={ false };
    visited[0] =true;
    while (!q.empty())
    {
       // count++;
        int x =q.front();
        q.pop();
        vector<ll> ::iterator i;
        for (i = adj[x].begin(); i != adj[x].end(); i++)
        {
            if (visited[*i]== false) {
                q.push(*i);
                dis[*i] = dis[x]+1;
                visited[*i] = true;
                continue;
            }

        
        }
        
    }
    // return res;


}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v <V; ++v)
    {
        cout << "\n Adjacency list of vertex "
            << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
void addEdge(vector<ll> adj[], int x, int y) {
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n, m;
        cin>>n>>m;
        int dis[n] ={0};
        vector<ll> adj[n];
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin>>x>>y;
            addEdge(adj, x-1, y-1);
        }
        //        printGraph(adj,n);      
     //   vector<int>res = bfs(adj, n);
       // cout<<"ll";

        bfs(adj,n,dis);
        cout<<dis[n-1]<<endl;
    }

}