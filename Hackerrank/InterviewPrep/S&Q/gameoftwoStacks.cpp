#include<bits/stdc++.h>
#define ll long long
using namespace std;


// int main() {
//     int g;
//     cin>>g;
//     while (g--)
//     {
//         ll n, m;
//         cin>>n>>m;
//         ll x;
//         cin>>x;

//         vector<int> A(n), B(m);
//         stack<ll> s1, s2;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>x;
//             A.push_back(x);
//         }

//         for (int i = 0; i < m; i++)
//         {
//             cin>>x;
//             B.push_back(x);
//         }
//         for (int i = A.size(); i >=0; i--) s1.push(A[i]);
//         for (int i = B.size(); i >=0; i--) s2.push(B[i]);

//         ll sum =0;
//         int cnt =0;
//         vector<int> counts;
//         while (sum<=x)
//         {
//             // if (s1.top()>s2.top()&& sum+s1.top()<=x) {
//             //     sum+= s1.top();
//             //     cnt++;
//             //     s1.pop();
//             //     continue;
//             // }
//             // else if (s2.top()>s1.top()&&sum +s2.top()<=x) {
//             //     sum+= s2.top();
//             //     cnt++;
//             //     s2.pop();
//             //     continue;
//             // }
//             // else if (s1.top()>s2.top()&&s1.top()+sum>x) {
//             //     if (s2.top()+sum<=x) {
//             //         sum+= s2.top();
//             //         cnt++;
//             //         s2.pop();
//             //         continue;
//             //     }
//             // }
//             // else if (s2.top()>s1.top()&&s2.top()+sum>x) {
//             //     if (s1.top()+sum<=x) {
//             //         sum+= s1.top();
//             //         cnt++;
//             //         s1.pop();
//             //         continue;
//             //     }
//             // }
//             // if(cnt==0) break;
//             if (s1.top()>s2.top()) {
//                 sum+= s1.top();
//                 cnt++;
//                 s1.pop();
//                 counts.push_back(cnt);
//                 continue;
//             }
//             else if (s2.top()>s1.top()) {
//                 sum+= s2.top();
//                 cnt++;
//                 s2.pop();
//                 counts.push_back(cnt);
//                 continue;
//             }
//             else if (s1.top()>s2.top()&&s1.top()+sum>x) {
//                 // if (s2.top()+sum<=x) {
//                 sum+= s2.top();
//                 cnt++;
//                 counts.push_back(cnt);
//                 s2.pop();
//                 continue;
//                 // }
//             }
//             else if (s2.top()>s1.top()&&s2.top()+sum>x) {
//                 // if (s1.top()+sum<=x) {
//                 sum+= s1.top();
//                 cnt++;
//                 counts.push_back(cnt);
//                 s1.pop();
//                 continue;
//                 // }
//             }
//             if (cnt==0) break;


//         }
//         // cout<<*max_element(counts.begin(), counts.end())<<endl;
//         cout<<counts.size()<<endl;

//         // cout<<counts[counts.size()-1]<<endl;



//     }

// }
int main() {
    ll g;
    cin>>g;
    while (g--) {
        int n, m, maxsum;
        cin>>n>>m>>maxsum;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < m; i++) cin>>b[i];

        int sum =0;
        int count =0;
        int i=0;
        while (sum<=maxsum&& i<n) {
            sum+=a[i];
            i++;
        }
        count =i;
        int j=0;
        while (j<m&&i>=0) {
            sum += b[j++];
            while (sum>=maxsum&&i>=0)
                sum-=a[--i];

        }
        if (sum<=maxsum&& count<i+j) count= i+j;

        cout<<count<<endl;
    }

}