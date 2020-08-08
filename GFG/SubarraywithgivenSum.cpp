#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n, s;
        cin>>n>>s;
        int arr[n];
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for ( int i = 0; i< n; i++)
        {
            int sum =arr[i];
            for (int j = i+1; j < n; j++)
            {
                if(sum==s){
                    cout<<i<<" "<<j-1;
                    break;
                }
                if(sum>s ||j==n)
                break;
            }            
        }
        
    }
}