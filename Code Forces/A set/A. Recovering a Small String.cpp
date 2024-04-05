#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        string s;
        bool flag1=false,flag2=false;
        for(int i=1;i<=26;i++){
            for(int j=1;j<=26;j++){
                for(int k=1;k<=26;k++){
                    if(i+j+k==n){
                        s+='a'+i-1;
                        s+='a'+j-1;
                        s+='a'+k-1;
                        flag1=true;
                        flag2=true;
                        break;
                    }
                }
                if(flag1) break;
            }
            if(flag2)break;
        }
        cout<<s<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}