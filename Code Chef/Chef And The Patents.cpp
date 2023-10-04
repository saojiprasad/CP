#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,x,k;
	    cin>>n>>m>>x>>k;
	    string s;
	    cin>>s;
	    int e=0;
	    int o=0;
	    for(auto i:s){
	        if(i=='E'){
	            e++;
	        }
	        else{ o++;}
	    }
	    long long int work=0;
	    
	    for(int i=1;i<=m;i++){
	            if(i%2==1){
	                work+=min(o,x);
	                o-=min(o,x);
	            }
	            else{
	                work+=min(x,e);
	                e-=min(x,e);
	            }
	    }
	    if(work>=n){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	    
	}
	return 0;
}
