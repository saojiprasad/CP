#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        vector<int>v;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }

        int cur=0;

        for(int i=0;i<n;i++){
            if(v[i]<cur){
                cout<<"NO"<<endl;
                return;
            }else{
                int x=v[i]/10;
                int y=v[i]%10;
                if(x>=cur){
                    if(y>=x){
                        cur=y;
                    }else cur=v[i];
                }else cur=v[i];
            }
        }
        cout<<"YES"<<endl;

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