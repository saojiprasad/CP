// #include <iostream>
#include<bits/stdc++.h> ;
using namespace std;

bool comparator(pair<int,int> i,pair<int,int> j){
    return i.second<j.second;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,l,r;
	    cin>>n>>m>>k>>l>>r;
	    vector<pair<int,int>>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i].first>>v[i].second;
	    }
	    sort(v.begin(),v.end(),comparator);

        
        
	    
	}
	return 0;
}
