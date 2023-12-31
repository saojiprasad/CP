#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve(){
        ll a,b;
        cin>>a>>b;
        ll g=gcd(a,b);
        if(a*b/g==b){
        // cout<<g<<endl;
        for(int i=2;i*i<=b;i++){
            if(i<=a&&a%i==0){
                cout<<b*i<<endl;
                return;
            }
            else if(b%i==0){
                cout<<b*i<<endl;
                return;
            }
        }
        cout<<b*b<<endl;
        }else{
            cout<<a*b/g<<endl;
        }
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