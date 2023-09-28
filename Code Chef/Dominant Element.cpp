#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        mp[a]++;
	    }
	    int maxi=0;
	    for(auto i:mp){
	        maxi=max(maxi,i.second);
	    }
	    
	    int count=0;
	    for(auto i:mp){
	        if(maxi==i.second){
	            count++;
	        }
	    }
	    if(count>=2){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}