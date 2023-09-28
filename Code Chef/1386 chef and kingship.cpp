#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int  main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long total=0;
	    long long ans=1;
	    for(long long i=1;i<n;i++){
	        ans=a[0]*a[i];
	        total+=ans;
	    }
	    cout<<total<<endl;
	}
	return 0;
}
