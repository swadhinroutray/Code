#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    vector<int> cost;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        cost.push_back(x);
    }

    if(k>=n){
        int sum=0;
        for (int i = 0; i<cost.size(); i++)
        {
            sum+=cost[i];
        }
        cout<<sum<<endl;
        return 0;
    }  

    sort(cost.begin(),cost.end(),greater<int>());
    int x = 0;
    ll sum =0;
    for (int i = 0; i <n; i++)
    {
        if(i%(k)==0&&i!=0) x++;

        sum= sum +(x+1)*cost[i];
    }
    cout<<sum<<endl;
    
}