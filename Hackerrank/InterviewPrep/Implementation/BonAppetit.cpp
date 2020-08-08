#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   int n,k;
   cin>>n>>k;
   int cost[n];
   int total=0, charged =0;
   for (int i = 0; i < n; i++)
   {
       cin>>cost[i];
       total += cost[i];
       if(i==k) continue;
       charged+= cost[i];
   }
   int x;
   cin>>x;
   if(x==charged/2) cout<<"Bon Appetit"<<endl;
else cout<<x-(charged)/2<<endl;
    

}