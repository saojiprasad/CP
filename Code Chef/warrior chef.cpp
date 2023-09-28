#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,h;
	    cin>>n>>h;
	    int arr[n];
	    int x=0,k=0;
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    sort(arr,arr+n,greater<int>());
	    int i;
	    for(i=0;i<n;i++){
	        k+=arr[i];
	        if(k>=h){
	            x=arr[i];
	            break;
	        }
	    }
	    if(i==n){
	        cout<<"0"<<endl;
	    }
	    else
	    cout<<arr[i]<<endl;
	}
	return 0;
}