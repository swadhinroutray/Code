#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    cout<<arr.size()<<endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    // cout<<endl;
  for (int i = 1; i < arr.size(); i++)
  {
    if(arr[i]!= arr[i-1] ){
        cout<<arr.size()-i<<endl;
    }
  }
  

    
}