#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr(n,0);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    long long sum=0,summ=0;
	    for(int i=k;i<n;i++){
	        summ+=arr[i];
	    }
	    for(int i=0;i<k;i++){
	        sum+=arr[i];
	    }
	    long long first=abs(sum-summ);
	    reverse(arr.begin(),arr.end());
	    sum=summ=0;
	     for(int i=k;i<n;i++){
	        summ+=arr[i];
	    }
	    for(int i=0;i<k;i++){
	        sum+=arr[i];
	    }
        long long second=abs(sum-summ);
        cout<<max(first,second)<<endl;
	}
	return 0;
}
