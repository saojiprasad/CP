#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n,0);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    bool flag=true;
	    sort(v.begin(),v.end());
	    for(int i=0;i<n-1;i++){
	        int a=abs(v[i]-v[i+1]);
	       // cout<<a<<"  ";
	        if(a>1){
	            flag=false;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
