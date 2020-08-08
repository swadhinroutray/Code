#include<bits/stdc++.h>
#define ll  long long
using namespace std;


int main(){
    string time;
    cin>>time;
    ll x;
    cin>>x;

    ll sum=0;
    for (int i = 0; i < time.length(); i++)
    {
        if(time[i]==':') continue;
        sum += int(time[i]);
    }
    if(sum%x==0) cout<<0;
    else if(sum%x!=0){
        int hours=0,min=0,index=0;
        for (int i = 0; i < time.length(); i++)
        {

            if(time[i]==':'){
                index=i;
                break;
            }
            hours=hours*10 +int(time[i]);
            
        }
        for (int i = index; i < time.length(); i++)
        {
            min+=int(time[i]);
        }
        int tot =hours*60+min;
        cout<<
        
        //TODO: (I GIVE Up)
    }
}