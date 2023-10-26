#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
bool comparator(string a,string b){
    return a.length()<b.length();
}

void solve(){
    
        int n;
        cin>>n;
        string s[100];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n,comparator);
        for(int i=0;i<n-1;i++){
            if(s[i+1].find(s[i])==string::npos){
                cout<<"NO"<<endl;
                // break;
                return;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){cout<<s[i]<<endl;}

}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}