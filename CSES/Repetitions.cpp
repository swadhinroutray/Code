#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr;
    cin>>arr;

    long int count=0;
    for (long int i = 0; i < arr.length(); i++)
    {
        long int currCount=1;
        for (long int j = i+1; j <arr.length(); j++)
        {
            if(arr[j]!=arr[i])
            break;
            currCount++;
        }
       if(currCount>count)
       count=currCount;
    }
    cout<<count;
    

}