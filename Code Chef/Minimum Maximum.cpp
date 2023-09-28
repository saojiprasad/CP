#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    cout<<arr[0]*(n-1)*1ll<<endl;
	}
	return 0;
}
