
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    int count=0;
	    int maxi=0;
	    for(auto i:mp){
	        maxi=max(maxi,i.second);
	        count+=i.second;
	    }
	    cout<<abs(count-maxi)<<endl;
	}
	return 0;
}
