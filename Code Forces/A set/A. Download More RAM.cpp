#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}


void solve(){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>>v(n+1);
        for(int i=0;i<n;i++){
            v[i].first=a[i];
            v[i].second=b[i];
        }

        sort(v.begin(),v.end());
        int sum=k;
        for(int i=0;i<n+1;i++){
            if(v[i].first<=sum){
                sum+=v[i].second;
            }
            // cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        cout<<sum<<endl;
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