#include<bits/stdc++.h>
using namespace std;

bool hasAllCodes(string s, int k) {
        // unorederd_map<string , int> mp;
        set<string>set;
        int n=s.size();
        string ss;
        for(int i=0;i<=n-k;i++){
          // for(int j=i;j<i+k;j++){
          ss=s.substr(i,k);
          set.insert(ss);
          // }
        }
        int requiredsize=pow(2,k);
        if(requiredsize==set.size()) return true;
        return false;

    }

int main(){
    string s="001110";
    int k=2;
    cout<<hasAllCodes(s,k);

}