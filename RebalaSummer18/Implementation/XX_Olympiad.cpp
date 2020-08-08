#include<bits/stdc++.h>
#define ll long long
using namespace std;


// vector<int> checkUnique(vector<int> arr){

// }
int main(){
    ll n;
    cin>>n;
    vector<int> arr;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x==0) continue;
        arr.push_back(x);
    }
    vector<int> :: iterator i;
    i =  unique(arr.begin(),arr.end());
   cout<<arr.size()<<endl;
    arr.resize(distance(arr.begin(),i));
   cout<<arr.size()<<endl;
   // vector<int> res =checkUnique(arr);
      for (ll j = 0; j < arr.size(); j++)
    {
        cout<<arr[j]<<'\t';
    }
    sort(arr.begin(),arr.end());
    if (arr[0]==0) cout<<arr.size()-1;
    
    else cout<<arr.size()<<endl;

    
}