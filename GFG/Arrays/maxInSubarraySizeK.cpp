#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,b) for(int i=a; i<b;i++)
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {cin>>arr[i];}

    for (int i = 0; i < n-k+1; i++)
    {  
        int max =arr[i];
        for(int j=1;j<k;j++){
            if(arr[i+j]>max) max =arr[i+j];
        }
        cout<<max<<" ";
       // cout<<*max_element(arr+i,arr+i+k)<<" ";
    } 
    cout<<"\n";
    
}
}