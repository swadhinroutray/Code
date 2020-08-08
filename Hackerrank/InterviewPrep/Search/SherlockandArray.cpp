#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
            sum+=x;
        }
        if(arr.size()==1) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        int temp =arr[0];
        if((sum - arr[0]) ==0){
             cout<<"YES"<<endl;
            continue;
        }
        int flag =0;
        for (int i = 1; i < n; i++)
        {
            // cout<<temp<<"  "<< sum -temp-arr[]
            if (temp == (sum-temp-arr[i]))
            {
                cout<<"YES"<<endl;
                flag =1;
            }
            temp+=arr[i];
        }

        if (flag==0) cout<<"NO"<<endl;
    }

}