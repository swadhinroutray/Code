#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 
int main() {
    int n, k;
    cin>>n>>k;
    vector<pair<ll, ll>> imp;
    vector<pair<ll, ll>> non;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin>>x >> y;
        if (y==1) {
            imp.push_back(make_pair(x, y));
            continue;
        }
        non.push_back(make_pair(x, y));
    }

    sort(non.begin(), non.end());
    if(imp.size()!=0)
    sort(imp.begin(), imp.end(),sortinrev);
    if(k>=imp.size()) k= imp.size();
    ll luck =0;
    for (ll i = 0; i < non.size(); i++)
    {
        luck+= non[i].first;
    }
    // cout<<"NON IMP "<< luck<<endl;
    // cout<<"IMP SIZE"<<imp.size()<<endl;
    int xy=0;
    for (ll i = 0; i < k&&imp.size()!=0; i++)
    {
        xy+=imp[i].first;
    }
    // cout<<"IMP "<<xy<<endl;
    ll tot=0;

    for (int i = k; i < imp.size() && imp.size()!=0; i++)
    {
        tot+=imp[i].first;
    }
    // cout<<"DISCARDED"<<tot<<endl;
    cout<<luck+xy-tot<<endl;
    
}