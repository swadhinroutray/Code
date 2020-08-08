#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findIn(vector<ll> arr, int k){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==k) return 1;
    }
    return 0;
    
}

int main(){
   ll n,d;
   cin>>n>>d;
   vector<ll> arr;
   for (int i = 0; i < n; i++)
   {
       int x;
       cin>>x;
       arr.push_back(x);
   }
   int count =0;
    for (int i = 0; i < n; i++)
    {
        if(findIn(arr,arr[i]+d)&&findIn(arr,arr[i]+2*d)) count++;
    }

    cout<<count<<endl;
    
}