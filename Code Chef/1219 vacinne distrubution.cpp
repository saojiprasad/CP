#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define for(n) for(int i=0;i<n;i++)
int main() {
    
	double t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    double a[n];
	    for(n){
	        cin>>a[i];
	    }
	    double risk_count=0;
	    double notrisk_count=0;
	    for(n){
	        if(a[i]>=80||a[i]<=9){
	            risk_count++;
	        }
	        else{
	            notrisk_count++;
	        }
	    }
	    
	    double risk_vac=ceil(risk_count/d);
	    double notrisk_vac=ceil(notrisk_count/d);
	    
	    cout<<risk_vac+notrisk_vac<<endl;
	    
	}
	return 0;
}