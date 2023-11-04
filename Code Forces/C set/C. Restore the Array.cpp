#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        for(int i=0;i<(n-1);i++){
            cin>>a[i];
        }
        vector<int>b;
        int mini=0;
        if(n==3){
            b.push_back(a[0]);
            b.push_back(0);
            b.push_back(a[n-2]);
        }
        else if(n==2){
            b.push_back(a[0]);
            b.push_back(a[0]);
        }
        else{
            b.push_back(a[0]);
        for(int i=0;i<n-3;i++){
            mini=min(a[i],a[i+1]);
            b.push_back(mini);
        }
        mini=min(a[n-3],a[n-2]);
        b.push_back(mini);
        b.push_back(a[n-2]);
        }

        for(auto i:b){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}