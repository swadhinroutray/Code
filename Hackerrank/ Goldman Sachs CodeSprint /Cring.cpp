#include <bits/stdc++.h>

using namespace std;
bool check(int ele, vector<int>unique){
    for(int i=0;i<unique.size();i++)
    if(unique[i]==ele) return true;

    return false;
}
vector<int> climbingScoreboard(int s, int scores[], int x, int trial[]) // s is the number of players and scores contains the top s scores, 
// x is the number of attempts allowed per player, trial contains Ekta's scores in x attempts

{
    vector<int> res;
    int high_place =9999;
    vector<int> unique;
    unique.push_back(scores[0]);
    for (int i=1;i<s;i++) 
    {
        if(check(scores[i],unique)) continue;
        unique.push_back(scores[i]);
    }
    //unique.pop_back();
    for (int i=0;unique[i]!=0;i++) 
    {
       cout<<unique[i]<<"\t";
    }
    cout<<endl;

    int j=0;
    for (int i=0; i<x; i++) {
        for (int j=0;unique[j]!=0; j++) {
        
        if(trial[i]>=unique[j]){
            if(j+1<high_place) {
                high_place= j+1;
                cout<<high_place<<endl;
            res.push_back(j+1);
            continue;
        }
        else{
            cout<<j+1<<endl;
            unique.push_back(trial[i]);
            sort(unique.begin(),unique.begin(),greater<int>());
            res.push_back(j+1);
        }
        

    }
        if(trial[i]<unique[j])
        {
            continue;
        }
        }
}

    return res;
}

int main()
{
    int scores_count,trial_count;
    cin >> scores_count;
    int scores[scores_count];
    for(int i=0; i<scores_count; ++i)
    {
        cin>>scores[i];
    }
    cin >> trial_count;
    int trial[trial_count];
    for(int i=0; i<trial_count; ++i)
    {
        cin>>trial[i];
    }
    vector<int> rank = climbingScoreboard(scores_count,scores,trial_count,trial);
    for(int i=0; i<trial_count-1;++i )
    {
        cout<<rank[i]<<" ";
    }
    cout<<rank[trial_count-1];
    return 0;
}