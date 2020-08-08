#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];    
    }
    if(n==2&& arr[0]==1) {cout<<"2"; return 0;} 
    if(n==2&& arr[0]==2) {cout<<"1"; return 0;}
    sort(arr,arr+n);
    long int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    long int tsum = (arr[n-2]*(arr[n-2]+1))/2;
    long int num = tsum - sum;
    cout<<num;
return 0;
}