#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    string str;
    int x  =0;
    for (int i = 0; i <n; i++)
    {
        cin>>str;
        if(str[0]=='+' || str[2]=='+')
            x++;
        else x--;
    }
    cout<<x<<endl;
}