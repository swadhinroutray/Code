#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<pair<ll, ll>> leader;
    int rank =1;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        if (i==0) {
            leader.push_back(make_pair(rank, x));
            continue;
        }
        if (x==leader[i-1].second)
        {
            leader.push_back(make_pair(rank, x));
            continue;
        }
        rank++;
        leader.push_back(make_pair(rank, x));
    }

    int m;
    cin>>m;
    vector<int> alice(m);
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        alice.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<leader[i].second<<" Rank: "<<leader[i].first<<endl;
    }

   // rank = leader[leader.size()-1].first;
    //vector<int> result;
    
    int point  =n;
    for (int i = 0; i < m; i++)
    {
        int cur_rank;
        while (point>=0&&leader[i].second<alice[i])  point--;

        if (point == -1)
            cur_rank =1;
        else if (alice[i]==leader[point].second)
            cur_rank = leader[point].first;
        else if (alice[i]<leader[point].second)
            cur_rank =leader[point].first+1;

        cout<<cur_rank<<'\t';
    }


}