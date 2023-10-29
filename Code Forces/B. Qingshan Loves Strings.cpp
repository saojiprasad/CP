#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        // int tsize=t.size();
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                flag=true;
            }
        }
        if(flag==false){
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<m;i++){
            if(t[i]==t[i+1]){
                cout<<"NO"<<endl;
                return;
            }
        }
        
        if(s.size()==1){
            cout<<"YES"<<endl;
            return;
        }
        else if(t[0]!=t[m-1]){
            cout<<"NO"<<endl;
            return;
            
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='0'&&s[i+1]=='0'&&t[0]=='0'&&t[m-1]=='0'){
                    cout<<"NO"<<endl;
                    return;
                }
                else if(s[i]=='1'&&s[i+1]=='1'&&t[0]=='1'&&t[m-1]=='1'){
                    cout<<"NO"<<endl;
                    return;
                }
                // else if(s[i]=='1'&&s[i+1]=='1'&&t[0]=='0'&&t[tsize-1]=='0'){
                //     cout<<""
                // }
            }
        }
        cout<<"YES"<<endl;
        return;
    
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}