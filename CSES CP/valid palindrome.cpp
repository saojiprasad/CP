#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(auto i:s){
        m[i]++;
    }
    int count=0;
    char c;
    for(auto i:m){
        if(i.second%2==1){
            c=i.first;
            count++;
        }
    }
    if(count>1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        string ss="";
        for(auto x:m){
            for(int i=0;i<x.second/2;i++){
                ss.push_back(x.first);
            }
        }
        if(count==1){
            cout<<ss<<c;
            reverse(ss.begin(),ss.end());
            cout<<ss<<endl;
            return 0;
        }
        cout<<ss;
        reverse(ss.begin(),ss.end());
        cout<<ss<<endl;
        return 0;
}