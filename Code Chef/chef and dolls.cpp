#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    unordered_map<string,int>m;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        string doll;
	        cin>>doll;
	        m[doll]++;
	    }
	    for(auto &pair:m){
	        if(pair.second % 2 != 0){
	            cout<<pair.first<<endl;
	            break;
	        }
	    }   
	}
	return 0;
}