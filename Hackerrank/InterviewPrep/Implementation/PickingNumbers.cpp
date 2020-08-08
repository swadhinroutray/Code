#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    vector<int> freq(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;

    }
    int count;
    int max=0;
    for (int i = 1; i < n; i++)
    {
        count = freq[i]+ freq[i-1];
        if(count>max) max =count;
    }
    cout<<max<<endl;
}