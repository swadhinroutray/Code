#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int sum_yet=0,max_sum=0;
        for(int i=0;i<n;i++){
            
            sum_yet+=arr[i];
            if(max_sum<sum_yet) max_sum=sum_yet;
            if(sum_yet<0) sum_yet=0;
        }
        if(sum_yet==0&&max_sum==0)
        {
            // sort(arr.begin(),arr.end(),greater<int>());
            // if(arr[0]<0) {
            //     cout<<"-1"<<endl;
            //     return 0;
            // }
            cout<<*max_element(arr.begin(),arr.end())<<endl;
            return 0;
        }
        cout<<max_sum<<endl;
    }
	return 0;
}