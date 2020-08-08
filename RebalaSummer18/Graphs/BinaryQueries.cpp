#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll n, q;
    cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x, L, R;
        cin>>x;
        if (x==1) {
            int y;
            cin>>y;
            arr[y-1] == 0? arr[y-1]=1: arr[y-1]=0;
        }

        else {
            cin>>L>>R;
            arr[R-1]==0? cout<<"EVEN"<<endl: cout<<"ODD"<<endl;

        }
    }


}