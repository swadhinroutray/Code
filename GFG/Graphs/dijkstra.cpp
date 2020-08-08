#include<bits/stdc++.h>
#define ll long long
using namespace std;

void addEdge(vector<pair<int, int>>adj[], int src, int dest, int weight) {
    adj[src].push_back(make_pair(dest, weight));
    adj[dest].push_back(make_pair(src, weight));
}

void dijkstra(vector<pair<int, int>> adj[], int src, int v) {
   
   int dist[v];
   for (int i = 0; i < v; i++)
   {
       dist[i] =INT_MAX;
   }
   
    set<pair<int, int>> s;
    dist[src]=0;
    s.insert(make_pair(0, src));

    while (!s.empty()) {
        pair<int, int> temp = *(s.begin());
        s.erase(s.begin());
        int u = temp.second;
        vector<pair<int, int>> ::iterator i;
    
        for (i = adj[u].begin(); i!=adj[u].end(); i++)
        {
            int v = (*i).first;
            int wei =(*i).second;

            if (dist[v]> dist[u]+wei) {
    
                if (dist[v]!= INT_MAX)
                    s.erase(s.find(make_pair(dist[v], v)));
    
                dist[v] =dist[u]+wei;
                s.insert(make_pair(dist[v], v));
            }
        }

    }
    for (int i = 0; i < v; i++)
    {
        cout<<"Vertex: "<<i<<" distance: "<<dist[i]<<endl;
    }

}
int main() {
    int v, e;
    cin>>v>>e;
    vector<pair<int, int>> adj[v];
    for (int i = 0; i < e; i++)
    {
        int x, y, z;
        cin>>x>>y>>z;
        addEdge(adj, x, y, z);
    }
    int src;
    cin>> src;

    dijkstra(adj, src, v);


}
/*
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6 
7 8 7
0
*/