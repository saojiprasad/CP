#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        ll sum=0;
        ll maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=0;
                sum+=arr[i][j];
                ll a=i+1,b=j+1;
                while(a<n&&b<m){
                    sum+=arr[a][b];
                    a++;
                    b++;
                }
                a=i+1,b=j-1;
                while(a<n&&b>=0){
                    sum+=arr[a][b];
                    a++;
                    b--;
                }
                a=i-1,b=j-1;
                while(a>=0&&b>=0){
                    sum+=arr[a][b];
                    a--;
                    b--;
                }
                a=i-1,b=j+1;
                while(a>=0&&b<m){
                    sum+=arr[a][b];
                    a--;
                    b++;
                }
                maxi=max(sum,maxi);
            }
        }
        cout<<maxi<<endl;


    }
}

int main(){
    solve();
}