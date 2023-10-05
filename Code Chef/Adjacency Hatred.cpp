#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    int even=0,odd=0;
	    vector<int>arro;
	    vector<int>arre;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]&1){odd++;arro.push_back(arr[i]);}
	        else {even++;arre.push_back(arr[i]);}}
	    if(even==0 || odd==0){cout<<"-1"<<endl;}
	    else{sort(arro.begin(),arro.end());
	    sort(arre.begin(),arre.end());
	    for(int i=0;i<arre.size();i++){cout<<arre[i]<<" ";}
	    for(auto i:arro){cout<<i<<" ";}cout<<endl;}}
	return 0;
}
