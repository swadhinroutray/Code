#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll t;
   cin>>t;
   while (t--)
   {
       ll p,h;
       cin>>h>>p;
        int c;
        while(p!=0 &&h!=0){
            h=h-p;
            p = p/2;
            if(h<=0) c=1;
            else c=0;
        }     
        cout<<c<<endl;
   }
   
}