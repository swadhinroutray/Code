#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    double n, m;
    cin >> n >> m;
    double a;
    cin >> a;
    double x,y;
    x=n/a;
    y=m/a;
    long long tiles = ceil(x)*ceil(y);
    cout<<tiles<<endl;
}