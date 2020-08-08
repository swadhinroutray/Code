#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll b, w;
        cin>>b>>w;
        ll bc, wc, z;
        cin>>bc>>wc>>z;
        if (bc==wc) {
            cout<<bc*b+wc*w<<endl;
            continue;
        }

        if (bc<wc) {
            if (bc+z<wc) {
                cout<<bc*b+ (bc+z)*w<<endl;
                continue;
            }
            cout<<bc*b+wc*w<<endl;
            continue;
        }
        if (wc<bc) {
            if (wc+z<bc) {
                cout<<(wc+z)*b+wc*w<<endl;
                continue;
            }
            cout<<wc*w+bc*b<<endl;
            continue;
        }
    }

}