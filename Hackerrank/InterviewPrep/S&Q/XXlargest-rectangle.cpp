#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    long arr[n];
    stack<long> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (s.empty() == true || arr[i] <= s.top())
        {

            s.push(arr[i]);
            // cout << s.top() << '\n';
        }
        if (s.top() < arr[i])
        {
            while (!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            s.push(arr[i]);
        }
    }
    ll k = 0;
    int x;
    vector<long> areas;
    while (!s.empty())
    {
        x = s.top();
         cout << x << '\t';
        s.pop();
        k++;
        areas.push_back(x * k);
    }
     cout << endl;
    cout << *max_element(areas.begin(), areas.end()) << endl;
}