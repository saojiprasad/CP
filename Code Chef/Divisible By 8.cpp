#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string ss="";
	    if(n>=3)
	    ss=s.substr(n-3,3);
	    else 
	    ss=s;
	    
	    int num=stoi(ss);
	    int ldigit=num%10;
	    int rem=num%8;
	    int ans=0;
	    if(num%8!=0){
	    if(ldigit<rem){
	        ans=ldigit-(8-rem);
	    }
	    else if(ldigit>rem){
	        ans=rem-ldigit;
	    }
	    else{
	        if(num<10){
	            ans=8;
	        }
	        else{
	        ans=0;
	        }
	    }
	    string lastdigit=to_string(ans);
	    s[n-1]=lastdigit[0];
	    cout<<s<<endl;
	    }
	    else{
	        cout<<s<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}
