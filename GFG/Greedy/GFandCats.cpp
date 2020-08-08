#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll int n;
    cin>>n;
    ll int str[n], cal[n];
    for (ll int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (ll int i = 0; i < n; i++)
    {
        cin>>cal[i];
    }
    sort(str,str+n,greater<int>());

    sort(cal,cal+n,greater<int>());
    ll tot=0;
    for (ll i = 0; i < n; i++)
    {
    tot += cal[i]*str[i];
    }
    cout<<tot<<'\n';
    
}