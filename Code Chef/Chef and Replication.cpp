#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	         cin>>arr[i];
	         mp[arr[i]]++;
	    } 
	    int sum=0;
	    bool flag=false;
	    for(auto i:mp){
	        if(i.second==k){
	            sum+=i.first;
	            if(i.first==0){
	                flag=true;
	            }
	        }
	    }
	    if(sum==0&&flag==false){
	        cout<<"-1"<<endl;
	    }
	    else if(sum==0&&flag==true){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<sum<<endl;
	    }
	}
	return 0;
}
