#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float percentage=floor((s/100)*c);
	    
	    float ans=s+percentage;
	    if(ans>=a&&ans<=b){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}
