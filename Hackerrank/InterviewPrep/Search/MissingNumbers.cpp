#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    int check[1000001] ={ 0 };
    int m;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        check[i]--;
    }
    cin>>m;
    int brr[m];

    for (int i = 0; i <m; i++)
    {
        cin>>brr[i];
       check[i]++;
    }
    vector<int> res;
    for ( int i = 0; i <1000001; i++)
    {
        if(check[i]>0) res.push_back(brr[i]);
    }
    sort(res.begin(),res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<'\t';
    }
    
    



}