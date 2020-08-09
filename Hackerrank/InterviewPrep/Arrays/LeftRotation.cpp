#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int n,d;
    cin>>n>>d;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);   
    }
    for (int i = 0; i < d; i++)
    {
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<'\t';
    }
    
    
}