#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    int q;
    cin>>q;
    string que[q];
    for (int i = 0; i < q; i++) cin>>que[q];
    int count[q] ={ 0 };


    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<que[i].compare(arr[j])<<endl;
            if (que[i] == arr[j])
                count[i]++;
        
        }

    }
    for (int i = 0; i < q; i++)cout<<count[i]<<endl;

}