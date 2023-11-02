#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int cnt=1;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        // if(cnt!=0) 
        maxi=max(maxi,cnt);
    }
    cout<<maxi<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}