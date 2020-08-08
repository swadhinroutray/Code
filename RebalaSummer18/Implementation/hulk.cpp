#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll n;
    cin>>n;
    if(n==1) {cout<<"I hate it"<<endl;return 0;}
    if(n==2) {cout<<"I hate that I love it"<<endl; return 0;};
    cout<<"I hate that";
    for (int i = 2; i < n; i++)
    {
        if(i%2==0)
        cout<<" I love that";
        else
        {
            cout<<" I hate that";
        }
        
    }
    if (n%2==0) cout<<" I love it";
    else cout<<" I hate it";

   
}