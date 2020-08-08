#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   int  n;
   cin>>n;
   vector<int> s;
   for (int i = 0; i < n; i++)
   {
       int x;

       cin>>x;
       s.push_back(x);
   }
   int d,m;
   cin>>d>>m;
   int count =0;
   for (int i = 0; i < n; i++)
   {
    //    int sum =0;
       if(i+m-1<n){

       int sum =0;
           for (int j = i; j <=i+m-1; j++)
           {
               sum+= s[j];
           }
           if(sum == d)
           count++;
       }
   }
   cout<<count<<endl;
   
   
}