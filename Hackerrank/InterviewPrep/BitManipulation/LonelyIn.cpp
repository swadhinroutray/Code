#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int x;
    cin>>x;
    int arr[x];
    for (int i = 0; i <x; i++)
    {
        cin>>arr[i];
    }
    int y =0;
    for (int i = 0; i < x; i++)
    {
        y= y^arr[i];
    }
    cout<<y<<endl;

}