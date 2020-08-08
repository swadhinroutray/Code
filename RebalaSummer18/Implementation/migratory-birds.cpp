#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll n;
   cin>>n;
   int arr[5]={0};
   int bird[n];
   for (int i = 0; i < n; i++)
   {
       cin>>bird[i];
       arr[bird[i]]++;
   }
   int index =1;
   int max =arr[1];
   for (ll i = 2; i <6 ; i++)
    {
       if(arr[i]>max)
       {
           max =arr[i];  
           index =i;

       } 
    }
   cout<<index<<endl;
   
    
}