#include <bits/stdc++.h>
#define max 10000
using namespace std;

void bfs(int arr[10][10], int n, int src)
{
    queue<int> q;
    bool visited[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    q.push(src);
    visited[src] = true;
    while (q.empty() == false)
    {
        int v = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (arr[v][i] == 1 && visited[i] == false)
            {
                visited[i] == true;
                q.push(i);
            }
        }
        cout << v << " ";
    }
}
int main()
{
    int vertices;
    cin >> vertices;
    int arr[10][10];

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> arr[i][j];
        }
    }
    int src;
    cin >> src;

    bfs(arr, vertices, src);
    return 0;
}