#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    void solve(){
        int n,m;
        cin>>n>>m;
        unordered_map<string,string>mp;
        map<string,ll>v,c;
        string s,s1;
        for(int i=0;i<n;i++){
            cin>>s>>s1;
            mp[s]=s1;
        }
        
        for(int i=0;i<m;i++){
            cin>>s;
            v[s]++;
            c[mp[s]]++;
        }
        string cans,pans;
        ll nchef=0,ncoun=0;
        
        for(auto i:v){
            if(nchef<i.second){pans=i.first;nchef=i.second;}
        }
        for(auto i:c){
            if(ncoun<i.second) {cans=i.first;ncoun=i.second;}
        }
        
        cout<<cans<<endl<<pans;
    }

int main() {
	solve();
	return 0;
}
