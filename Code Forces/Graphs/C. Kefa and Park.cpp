#include<bits/stdc++.h>
#define ll long long
#define Size 100010
using namespace std;

vector<ll>adj[Size];
bool vis[Size];
ll n,m,total=0;
ll cc[Size];

void dfs(ll s,ll sum){
    if(vis[s]) return;

    vis[s]=1;

    if(cc[s]){
        sum++;
    }
    else{
        sum=0;
    }
    if(sum>m) return;

    if(s!=1 && adj[s].size()==1)
    {
        total++;
    }

    for(int i=0;i<adj[s].size();i++)
    {
        dfs(adj[s][i],sum);
    }


}



void solve(){
    ll i,j,k;
    ll u,v;
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>cc[i];
    }

    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    cout<<total;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}