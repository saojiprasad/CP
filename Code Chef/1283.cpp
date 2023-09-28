#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    vector<int>v(n,0);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end(),greater<int>());
	  
	    long long ans=0;
	    for(int i=l-1;i<n;i+=k){
            
	        ans+=v[i];
	       // cout<<ans<<"-->";
	    }
	    
	    cout<<ans<<"okay"<<endl;
	}
	return 0;
}
