#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    string ss;
    bool flag=false,cnt=false;
    int i=0,cnta=0;
    for(i=0;i<n;i++){
        if(s[i]=='a'){
            cnta++;
        }
        if(s[i]!='a'){
            cnt=true;
        }//abacaba
        if(s[i]=='a'&&s[i+1]!='a'&&cnt){
            if(s[i]!=s[i+1]){
                flag=true;
                // cnt++;
            }
            ss+=s[i];
            break;
        }
        if(s[i]=='a'&&cnt){
            break;
        }
        if(s[i]=='a'&&flag){
            break;
        }
        if(s[i]=='a')
        ss+=s[i];
        else
        ss+=s[i]-1;
        
    }
    
    if(i!=n){
        ss+=s.substr(i+1,s.size());
    }
    if(s.size()==1&&s[0]=='a'){
        cout<<'z'<<endl;
    }
    else if(cnta==n){
        cout<<s.substr(0,s.size()-1)<<'z'<<endl;
    }
    else
    cout<<ss<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}