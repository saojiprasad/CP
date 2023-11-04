#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
   string ss;
    for(int i=0;i<n;i+=2){
        ss+=s[i];
    }
    sort(ss.begin(),ss.end());
    
    for(int i=0;i<ss.size()-1;i++)
        cout<<ss[i]<<"+";
    
    cout<<ss[ss.length()-1];
}