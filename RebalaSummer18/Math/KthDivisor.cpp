#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> div;

    for (ll i = 1; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ll d = n/i;
            div.push_back(i);
            if(d!=i) div.push_back(d);
        }
    }
    sort(div.begin(),div.end());
    if ((k) > div.size())
        cout << "-1";
    else
        cout << div[k - 1] << endl;
}