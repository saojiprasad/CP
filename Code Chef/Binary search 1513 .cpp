#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	int arr[n]={0};
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	while(q--){
	    int a;
	    cin>>a;
	    int count=0;
	    bool flag=false;
	    int s=0,e=n-1;
	    while(s<e){
	        int m=(s+e)/2;
	        if(arr[m]==a){
	            flag=true;
	            break;
	        }
	        else if(arr[m]>a){
	            e=m;
	        }
	        else{
	            s=m+1;
	            count=m+1;
	        }
	    }
        
        int ans=n-count;
        cout<<flag;
        if(flag==true){
            cout<<"0"<<endl;
        }
        
        else if(ans%2==0||(arr[n-1]<a)){
            cout<<"POSITIVE"<<endl;
        }
        else{
            cout<<"NEGATIVE"<<endl;
        }
	    
	    
	}
	
	
	return 0;
}
