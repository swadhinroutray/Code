#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   int p,d,m,s;
   cin>>p>>d>>m>>s;
   int count =0;
   while(s>=p){
       s= s-p;
       count++;
       p=max(p-d,m);

   }
   cout<<count<<endl;
}
