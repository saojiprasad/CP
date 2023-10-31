#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
    }
    ll ori=0;
    ll com=0;
    for(ll i=0;i<n;i++){
        ori+=v[i].first;
        com+=v[i].second;
    }
    if(com>m){
        cout<<-1<<endl;
        return;
    }
    if(com==m){
        cout<<n<<endl;
        return;
    }
    if(ori==m){
        cout<<0<<endl;
        return;
    }
    vector<ll>dif;
    for(ll i=0;i<n;i++){
        ll x=v[i].first-v[i].second;
        // cout<<x<<"  ";
        dif.push_back(x);
    }
    sort(dif.begin(),dif.end());
    ll diff=ori-m;
    ll sum=0;
    ll count=0;
    for(int i=n-1;i>=0;i--){
        if(sum>=diff) break;
        count++;
        sum+=dif[i];
        // cout<<dif[i]<<endl;
    }
    // cout<<ori<<"   "<<com;
    cout<<count<<endl;
    // cout<<dif.size();
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}