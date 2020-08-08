#include <bits/stdc++.h>
#include <list>
#define _GLIBCXX_USE_CXX11_ABI 1
using namespace std;
class BFS
{ public:

        list<int> *adj;
        BFS(int V)
         {
              adj= new list<int>[V];
         };

    void bfs(int src, int n)
    {
        bool vis[n] = {false};
        list<int> q;
        list<int>::iterator i;
        q.push_back(src);

        vis[src] = true;

        while (q.empty() == false)
        {
            int x = q.front();
            q.pop_back();
            cout << x << "\t";
            for (i = adj[x].begin(); i != adj[x].end(); i++)
            {
                if (vis[*i] == false)
                {
                    vis[*i] = true;
                    q.push_back(*i);
                }
            }
        }
    }
   
};
 int main()
    {
        int v;
        cin >> v;
        int edges;
        cin >> edges;
        BFS b(v);
        for (int i = 0; i < edges; i++)
        {
            int x, y;
            cin >> x >> y;
            b.adj[x].push_back(y);
        }

        int src;
        cin >> src;
        b.bfs(src, edges);
    
        return 0;
    }