#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        int p1,p2,q1,q2;
        int r1,r2;
        r1=r2=0;
        cin>>p1>>p2>>q1>>q2;
        r1= 2*q1-p1;
        r2= 2*q2-p2;
        cout<<r1<<" "<<r2<<endl;
    }
    
}