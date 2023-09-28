#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    if(n%2==0){
	        for(int i=0;i<=n;i+=2){
	            ans+=(i*i);
	        }
	    }
	    else{
	        for(int i=1;i<=n;i+=2){
	            ans+=(i*i);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
