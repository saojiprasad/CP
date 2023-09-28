#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float u,v,a,s;
	    cin>>u>>v>>a>>s;
	    int ans=sqrt((u*u)-(2*a*s));
	    
	    if(v<ans){
	        cout<<"NO"<<endl;
	    }
	    else 
	    {cout<<"YES"<<endl;}
	}
	return 0;
}
