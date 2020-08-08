#include<bits/stdc++.h>
#define inta long long
using namespace std;
int main()
{
    inta t;
    cin>>t;
    for(inta i=0;i<t;i++)
    {
        inta n;
        inta k;
        cin>>n>>k;;
        vector<pair<int,int>> c;
        for(inta j=0;j<n;j++)
        {
            inta temp=k;
            inta x;
            cin>>x;
            if(temp%x==0)
            {
              
                c.push_back(make_pair((temp/x)-1,x));
            }
            else
            {
               
                 c.push_back(make_pair(-1,x));
            }
            

           
        }
        inta mina=INT_MAX;
        inta ans;
      
        for(auto p:c)
        {
            if(p.first!=-1&&p.first<mina)
            {
                mina=p.first;
                ans=p.second;
            }
        }
        if(mina==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
}