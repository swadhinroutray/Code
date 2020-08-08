#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dx[] ={ 1, 1, 1, 0, 0, 0, -1, -1, -1 };
int dy[] ={ 1, 0, -1, 1, 0, -1, 1, 0, -1 };
// int arr[10][10];
int x;
int safe(int arr[][100], int row, int col, int vis[][100], int n, int m) {

    return (row<n) && (col<m) && (row>=0) && (col>=0) && (arr[row][col]== 1 && vis[row][col]==0);
}

void DFS(int arr[][100], int row, int col, int vis[][100], int n, int m) {

    x++;
    vis[row][col] =1;
    for (int i = 0; i < 8; i++)
    {

        if (safe(arr, row+dx[i], col+dy[i], vis, n, m))
        {
            DFS(arr, row+dx[i], col+dy[i], vis, n, m);
        }
    }

}
int main() {
    int n, m;
    cin>>n>>m;
    // vector<vector<int>> arr(n);
    // vector<vector<int>> vis(n);
    int arr[n][100];
    int vis[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            int x;
            cin>>x;
            arr[i][j]=x;
            vis[i][j]=0;
        }

    }
    int count =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] && !vis[i][j])
            {
                x=0;
                DFS(arr, i, j, vis, n, m);
                if (x>count) count =x;
            }
        }

    }
    cout<<count<<endl;




}