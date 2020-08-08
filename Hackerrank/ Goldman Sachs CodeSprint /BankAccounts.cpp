#include <bits/stdc++.h>
#define ll long long
using namespace std;

// double Checkmax(ll a, double b)
// {
//     if (a >= b)
//         return a;
//     return b;
// }
int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        ll n, k, x, d;
        cin >> n >> k >> x >> d;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
        //  auto e = x * 0.01 * arr[i];
            auto temp = (fmax(k, x * 0.01 * arr[i]));
            sum += temp;
        }
        cout << sum << endl;

        if (sum <= d)
            cout << "fee\n";
        else
            cout << "upfront\n";
    }
    return 0;
}
