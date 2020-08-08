#include<bits/stdc++.h>
#define ll long long
using namespace std;

void addEdge(vector<pair<int, int>>adj[], int src, int dest, int weight) {
    adj[src].push_back(make_pair(dest, weight));
    adj[dest].push_back(make_pair(src, weight));
}

vector<int> dijkstra(vector<pair<int, int>> adj[], int src, int v) {
    // int dist[v];
    // for (int i = 0; i < v; i++) dist[i]=INT_MAX;
    set<pair<int, int>> s;
    vector<int> dist(v, INT_MAX);
    s.insert(make_pair(0, src));
    dist[src] =0;
    while (!s.empty()) {

        pair<int, int> temp = *(s.begin());
        s.erase(s.begin());
        int u = temp.second;
        vector<pair<int, int>> ::iterator i;
        for (i = adj[u].begin(); i!= adj[u].end(); i++)
        {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v]> dist[u]+weight) {
                if (dist[v]!= INT_MAX)
                    s.erase(s.find(make_pair(dist[v], v)));

                dist[v] =dist[u]+ weight;
                s.insert(make_pair(dist[v], v));
            }

        }

    }

    return dist;



}

bool allFull(vector<bool> filled){
    for (int i = 0; i < filled.size(); i++)
    {
        if(filled[i]==false) return false;
    }
    return true;
}
void placeCars(vector<pair<int, int>> d, int cost[], int k, int v) {
    vector<int> c(k, -1);
    vector<bool> filled(v, false);
    int i=0,j=0;
    vector<int> count(v,0);
    while (i!=k)
    {
        if(allFull(filled)==true) break;
        if (count[d[j].second] ==cost[d[j].second]) {
            filled[d[j].second]=true;
            j++;
            continue;
        }
        c[i]=d[j].first;
        count[d[j].second]++;
        i++;

    }
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]+20<<" ";
    }
    
}
int main() {
    int v, e, fee;
    cin>>v>>e>>fee;
    int cost[v];
    for (int i = 0; i < v; i++) cin>>cost[i];

    vector<pair<int, int>> adj[v];

    for (int j = 0; j < e; j++)
    {
        int x, y, z;
        cin>>x>>y>>z;
        addEdge(adj, x-1, y-1, z);
    }

    vector<int> distance =  dijkstra(adj, 0, v);
    int k;
    cin>>k;
    vector<pair<int, int>> order;
    for (int i = 0; i < distance.size(); i++)
    {
        order.push_back(make_pair(distance[i], i));
    }
    sort(order.begin(), order.end());
    
    placeCars(order, cost, k, v);

}