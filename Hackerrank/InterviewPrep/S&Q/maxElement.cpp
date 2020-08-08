#include<bits/stdc++.h>
#define ll long long
using namespace std;


class ELE {
    int ele;
    int max;
};
int main() {
    ll n;
    cin>>n;
    stack<pair<ll, ll>> s1, s2;
    int type, x;
    int maxele =0;
    for (int i = 0; i < n; i++)
    {
        cin>>type;
        if (type==1) {
            cin>>x;

            if (s1.empty()) {
                maxele =x;
                s1.push({ x, maxele });
                continue;
            }
            else {
                if (x>s1.top().second)
                {
                    maxele = x;
                    s1.push({ x, maxele });
                    continue;
                }
                s1.push({ x, s1.top().second });
            }
        }
        else if (type==2) {
            s1.pop();
        }
        else {
            cout<<s1.top().second<<endl;
        }

    }

}