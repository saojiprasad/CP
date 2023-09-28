#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k,s;
	    cin>>n>>k>>s;
	    
	    int fake=0;
	    long long sum=0;
	    for(int i=1;i<n*2;i+=2){
	       // cout<<i<<" ";
	        sum+=i;
	    }
	   // cout<<sum<<endl;
	    for(int i=1;i<n*2;i+=2){
	        long long ans=sum;
	        
	        ans+=(k-1)*i;
	        if(ans==s){
	            cout<<i<<endl;
	        }
	    }
	    
	}
	
	
	return 0;
}
