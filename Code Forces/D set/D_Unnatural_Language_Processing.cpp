#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>v;
        for(int i=n-1;i>1;i--){
            if(s[i]=='a'||s[i]=='e'){
                v.push_back(s[i]);
                v.push_back(s[i-1]);
                v.push_back('.');
                i--;
            }
            else{
                v.push_back(s[i]);
            }
        }
        v.push_back(s[1]);
        v.push_back(s[0]);
        string ans="";
        reverse(v.begin(),v.end());
        for(auto i : v){
            ans+=i;
        }
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