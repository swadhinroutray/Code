#include<bits/stdc++.h>
#define ll long long
using namespace std;


void bfs(vector<ll>adj[], int n,int src, bool visited[]) {
    queue<int> q;
    vector<int> dis(n,-1);
    dis[src] =0; 
    q.push(src);

    while (!q.empty())
    {
        int x =q.front();
        q.pop();
        // cout<<x<<endl;
        // cout<<dis[x]<<endl;
        vector<ll> ::iterator i;
        for (i = adj[x].begin(); i != adj[x].end(); i++)
        {

            if (visited[*i]== false) {
                q.push(*i);
                dis[*i] = dis[x]+1;
                visited[*i] = true;
            }


        }
    }
     for (int i = 0; i <n; i++)
        {
            if (dis[i]!= -1&& i!=src) cout<<dis[i]*6<<' ';
            else if(i==src) continue;
            else cout<<"-1"<<" ";
        }
        cout<<endl;

}
void printGraph(vector<ll> adj[], int V)
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
       // printGraph(adj, n);
        int src;
        cin>>src;
        bool visited[n] ={ false };
        visited[src-1] =true;
    bfs(adj,n,src-1, visited);
        // cout<<"ll\n";
        // for (int i = 1; i <n; i++)
        // {
        //     if (dis[i]!= -1) cout<<dis[i]*6<<'\t';
        //     else cout<<dis[i]<<'\t';
        // }
        // cout<<endl;


    }
    return 0;

}