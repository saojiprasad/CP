#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        unordered_map<string,int>m;
        
        for(int i=1;i<n;i++){
            string str="";
            for(int j=i-1;j<=i;j++){
                str+=s[j];
            }
            m[str]++;
        }
        cout<<m.size()<<endl;
    }
}