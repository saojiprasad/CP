#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i;
        string ss;
        // cout<<"s"<<" ";
        ss=s[0];
        
        for(i=1;i<n;i++){
            if(s[i-1]<s[i]||s[0]==s[i])
            break;
            ss+=s[i];
        }
        string ans=ss;
        i=i-1;
        reverse(ss.begin(),ss.end());
        ans+=ss;
        cout<<ans<<endl;
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