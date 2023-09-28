#include<iostream>
#include<bits/stdc++.h>

using namespace std;
string convert(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    return s;
}
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++) s1[i]=tolower(s1[i]);
    for(int i=0;i<s1.length();i++) s2[i]=tolower(s2[i]);
    // string s3=convert(s1);
    // string s4=convert(s2);
    if(s1==s2){
        cout<<"0"<<endl;
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]<s1[i]){
            cout<<"-1"<<endl;
            break;
        }
        else if(s1[i]>s2[i]){
            cout<<"1"<<endl;
            break;
        }
    }
    
}