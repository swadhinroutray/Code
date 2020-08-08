#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    ll min = arr[n - 1] - arr[0];
    for (int i = 0; i < n-1; i++)
    {
        int x = arr[i + 1] - arr[i];
        if (x < min)
            min = x;
    }
    cout << min << endl;
}