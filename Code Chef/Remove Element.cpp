#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    long long arr[n];
	    for(long long i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long long final=arr[n-1]+arr[0];
	    if(n==1){
	        cout<<"YES"<<endl;
	        continue;
	    }
	   // cout<<final<<"-->"<< endl;
	    if(final<=k){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
