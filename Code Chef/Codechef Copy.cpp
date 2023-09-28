#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    string c="codechef";
	    for(int i=0;i<s.size();i++){
	        if(s[i]==c[i]){
	            for(int j=0;j<c.size();j++){
	                if(i!=j&&s[i]!=c[j]&&s[j]!=c[i]){
	                    swap(s[i],s[j]);
	                }
	            }
	        }
	    }
	    bool okay=true;
	    for(int i=0;i<c.size();i++){
	        if(s[i]==c[i]) okay=false;
	    }
	    if(okay){
	        cout<<s<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
