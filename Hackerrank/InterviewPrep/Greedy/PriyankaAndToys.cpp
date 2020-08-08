#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll n;
    cin>>n;
    vector<int> w;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        w.push_back(x);
    }
    int count = 0;
    sort(w.begin(), w.end());
    int i=0;
    while (i!=w.size())
    {
        count++;
        int maxW = w[i]+4;
        while (i!=w.size()&& w[i]<=maxW) i++;
        if (i== w.size()) break;

    }
    cout<<count<<endl;



}