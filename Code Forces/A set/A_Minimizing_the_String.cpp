#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool okay=true;
        for(int i=0;i<s.size();i++){
            
            if(okay && i==s.size()-1){
                continue;
            }

            if(!okay && i!=s.size()-1 ){
            cout<<s[i];
            continue;
        }


            if(okay){
                if(s[i]>s[i+1]){
                    okay=0;
                    continue;
                }
            }

            cout<<s[i];

        }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}