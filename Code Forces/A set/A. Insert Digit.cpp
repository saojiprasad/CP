#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int i=0;
        int place=-1;
        for(i=0;i<n;i++){
            int a=s[i]-'0';
            if(a<m){
                place=i;
                break;
                
            }
        }
        if(place==-1){
            char ch=m+'0';
            s.push_back(ch);
            cout<<s<<endl;
        }
        else{
            string ss=s.substr(place,s.size());
            string sss=s.substr(0,place);
            char ch=m+'0';
            sss+=ch;
            sss+=ss;
            cout<<sss<<endl;
        }

    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}