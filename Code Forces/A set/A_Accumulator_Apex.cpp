#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int x,k;
        cin>>x>>k;
        vector<vector<int>>v;
        for(int i=0;i<k;i++){
            int l;
            cin>>l;
            vector<int>vv;
            for(int j=0;j<l;j++){
                int x;
                cin>>x;
                vv.push_back(x);
            }
            v.push_back(vv);
        }


}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}