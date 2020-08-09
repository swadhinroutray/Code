#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int checkParan(string a){
    stack <char> s;
	int size= a.length();
	for(int i =0;i<size;i++){
	    if((a[i]=='}'||a[i]==']'||a[i]==')')&&s.empty()==true) return 0;
	    if(a[i]=='{'||a[i]=='['||a[i]=='(')
	    {s.push(a[i]); continue;}
	    
	    else if((a[i]=='}'||a[i]==']'||a[i]==')')&&s.empty()==false){
	      switch(a[i]){
	          case '}': if(s.top() =='{') {s.pop(); break;}
	                    return 0;
	          case ')': if(s.top() =='(') {s.pop(); break;}
	                    return 0;
	          case ']': if(s.top() =='[') {s.pop(); break;}
	                    return 0;
	                    
	      }
	    }
	    
	}
	if(s.empty()==true) return 1;
	return 0;
}

int main() {
	int t;
	
	cin>>t;
	for(int i =0;i<t;i++){
	    string str;
	    cin>>str;
	    int check=checkParan(str);
	
	    if(check==1) cout<<"balanced\n";
	    else
	    cout<<"not balanced \n";
	    
	}
 	return 0;
}