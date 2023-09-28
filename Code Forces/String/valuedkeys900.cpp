#include<iostream>
using namespace std;

void solve (string s,string t){
    string ss="";
    for(int i=0;i<s.size();i++){
        if(t[i]>s[i]){
            cout<<"-1"<<endl;
            return;
        }
        if(s[i]=='z'&&t[i]=='z'){
            ss+='z';
        }
        else if(s[i]==t[i]){
            ss+=s[i]+1;
        }
        else if(s[i]>t[i]){
            ss+=t[i];
        }
    }
    cout<<ss<<endl;
}

int main(){
    string s,t;
    cin>>s>>t;
    solve(s,t);

}