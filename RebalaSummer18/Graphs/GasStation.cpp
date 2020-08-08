#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   int n;
   ll x;
   cin>>n>>x;
   int arr[n];
   int count =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        x=x-arr[i];
        count++;
        if(x<=0) break;
    }
    cout<<count<<endl;
    
}