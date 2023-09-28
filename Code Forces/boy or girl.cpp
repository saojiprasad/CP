#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    unordered_set<int> h;
    for(int i=0;i<s.size();i++){
        h.insert(s[i]);
    }
    int n=h.size();
    if(n%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}