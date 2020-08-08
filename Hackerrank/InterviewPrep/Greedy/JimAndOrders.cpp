#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   int n;
   cin>>n;
   vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x+y,i+1});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].second<<'\t';
    }
     
}