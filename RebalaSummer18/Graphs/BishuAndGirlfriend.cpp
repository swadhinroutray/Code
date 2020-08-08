#include<bits/stdc++.h>
#define ll long long
using namespace std;


void dfs(vector<ll> adj[],int src, int dist[], bool visited[]){
    visited[src]=true;
    vector<ll> :: iterator i;
    for ( i = adj[src].begin(); i!=adj[src].end(); i++)
    {
        if(visited[*i]== false){
            dist[*i] = dist[src]+1;
            dfs(adj,*i,dist,visited);
        }
    }
    
}

void addEdge(vector<ll> adj[], int x, int y) {
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main() {
        int n;
       cin>>n;
 
        int dis[n] ={0};
        vector<ll> adj[n];
        for (int i = 0; i < n-1; i++)
        {
            int x, y;
            cin>>x>>y;
            addEdge(adj, x-1, y-1);
        }
        bool visited[n] = {0};
        dis[0]=0;
        dfs(adj,0,dis,visited); 
        
        int q;
        cin>>q;
        int minDist = INT_MAX;
        int index =-1;
        for (int i = 0; i < q; i++)
        {
            int z;
            cin>>z;
            if(dis[z-1]<minDist) {
                minDist =dis[z-1];
                index =z;
            }
            else if(minDist ==dis[z-1] && z-1<index){
                index = z;
            }
        }

        cout<<index<<endl;
        
}