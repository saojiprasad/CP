#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
}

int main() {
    solve();
	return 0;
}
