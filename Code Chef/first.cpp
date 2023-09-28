#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    vector<string>s(n);

    for(int i=0;i<n;i++) cin>>s[i];
    unordered_map<string,int>m;
    string st;
    string str="";

    for(int i=s.size()-1;i>=0;i--) {
        st=s[i];

        if(m.find(st)!=m.end()){
           // cout<<"-->";
            continue;
        }
        else{
            str+=st[st.size()-2];
            str+=st[st.size()-1];
            m[st]++;
        }
           
    }
     cout<<str<<endl;
}
