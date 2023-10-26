#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n!=0){
        cout<<"NO"<<endl;
    }
    else{
        sum=0;
        for(int i=0;i<n;i++){
            a[i]=a[i]/2;
            sum+=a[i];
        }
        if(sum%n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}