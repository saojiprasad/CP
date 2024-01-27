#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int x,n;
        cin>>x>>n;
        int q=x/n;
        set<int>st;
        for(int i=1;i<=sqrt(x);i++){
            if(x%i==0){
                st.insert(i);
                st.insert(x/i);
            }
        }
        auto it=st.lower_bound(q);
        if(*it>q){
            it--;
        }
        
        cout<<*it<<endl;
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