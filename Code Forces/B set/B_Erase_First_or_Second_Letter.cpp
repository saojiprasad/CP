#include<bits/stdc++.h>
#define ll long long int
using namespace std;



// void f(int n,string s,int i,string output){

//     if(i==n) return;
    
//     f(n,s,i+1,output);



// }
    

void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string> st;
        ll ans=0;
        for(int i=0;i<n;i++){
            string ss="";
            ss+=s[i];
            st.insert(ss);
            ans+=st.size();
        }
        cout<<ans<<endl;
        // for(auto i : st) cout<<i<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}