#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll int n;
    cin>>n;
    ll count =0;
    while (n>0) {
        if ((n&1) ==0) count++;
        n>>=1;
    }
    cout<<pow(2,count);
}