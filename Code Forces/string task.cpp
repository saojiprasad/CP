#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++) s[i]=tolower(s[i]);
    string t;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            continue;
        }
        t+=s[i];
    }
    for(int i=0;i<t.size();i++){
        cout<<"."<<t[i];
    }
    
}