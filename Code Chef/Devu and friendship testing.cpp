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
	    map<int,int>m;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        m[a]++;
	    }
	    cout<<m.size()<<endl;
	}
	return 0;
}
