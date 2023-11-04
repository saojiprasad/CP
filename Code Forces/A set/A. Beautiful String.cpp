#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'&&s[i+1]=='?'){
                if(s[i-1]=='a'){
                    s[i]='b';
                }
                else if(s[i-1]=='b'){
                    s[i]='c';
                }
                else if(s[i-1]=='c'){
                    s[i]='a';
                }
            }
            else if(s[i]=='?'){
                if((s[i+1]=='a' && s[i-1]=='b')||(s[i+1]=='b'&&s[i-1]=='a')){
                    s[i]=='c';
                }
                else if((s[i+1]=='b'&&s[i-1]=='c')||(s[i+1]=='c'&&s[i-1]=='b')){
                    s[i]=='a';
                }
                else if((s[i+1]=='c'&&s[i-1]=='a')||(s[i+1]=='a'&&s[i-1]=='c')){
                    s[i]=='b';
                }
            }
        }
    }
}

int main(){
    solve();
}