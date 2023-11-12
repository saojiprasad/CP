#include<bits/stdc++.h>
using namespace std;
void solve(){
	    string s,s1;
	    cin>>s>>s1;
        string sss=s+s1;
        cout<<"PRASAD"<<endl;
        // cin>>s;
	    int n;
	    cin>>n;
        cin.ignore();
	    vector<string>inp(n);
	    for(int i=0;i<n;i++){
	        string ss;
	        cin>>ss;
	        inp[i]=ss;
	    }
	    vector<int>v(26,0),v1(26,0);
	    
	    for(int i=0;i<sss.size();i++) {
	        if(sss[i]==' ') continue;
	        int a=sss[i]-'a';
	        v[a]++;
	    }
	    
	    for(int i=0;i<inp.size();i++){
	        for(int j=0;j<inp[i].size();j++){
	            int a=inp[i][j]-'a';
	            v1[a]++;
                
	        }
	    }
        bool flag=true;
        for(int i=0;i<26;i++){
            if(v1[i]>v[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

	    // for(auto i: v) cout<<i<<"  ";
	    // cout<<endl;
	    // for(auto i: v1) cout<<i<<"  ";
	    // cout<<endl;
}
int main() {
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
        solve();
    }
	return 0;
}


