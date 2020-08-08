#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, m, s;
        cin>>n>>m>>s;
       int x =s;
    //    int i;
    //    for( i= 0;i<m;i++){
    //        if(x == n) {
    //            if(i==m-1) break;
    //            x= 1;
    //            continue;
    //        }
    //        x++;
    //    }
    //    if(i==m-1) cout<<x<<endl;
    //    else cout<<x-1<<endl;;
        cout<<(s+m-2)%n +1<<endl;
    }

}
