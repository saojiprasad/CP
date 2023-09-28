#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll ans=0;
        int i=0;
        while(i<n){
            ll maxi=-2e18;
            ll j=i;
            while(j<n && ((arr[j]>0 && arr[i]>0)||(arr[j]<0 && arr[i]<0))){
                maxi=max(maxi,arr[j]);
                j++;
            }
            ans+=maxi;
            i=j;
        }
        cout<<ans<<endl;


    }
}