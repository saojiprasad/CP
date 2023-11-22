#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        ll n;
        cin>>n;
        ll ans=0;
        ans=(n*(n+1))/2;
        if(ans%2==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(n%2==0){
                vector<int>ans1,ans2;
                int rem=n/4;
                for(int i=1;i<=n;i++){
                    if(i<=(n/4)){
                        ans1.push_back(i);
                    }
                    else if(i>(n/4)&&i<=(n-rem)){
                        ans2.push_back(i);
                    }
                    else{
                        ans1.push_back(i);
                    }
                }
                cout<<ans1.size()<<endl;
                for(auto i : ans1) cout<<i<<" ";
                cout<<endl;
                cout<<ans2.size()<<endl;
                for(auto i : ans2) cout<<i<<" ";
                cout<<endl;
            }
            else{
                vector<int>ans1,ans2;
                int rem=n/4;
                for(int i=1;i<=n;i++){
                    if(i<=rem){
                        ans1.push_back(i);
                    }
                    else if(i>(n/4)&&i<=(n-rem-1)){
                        ans2.push_back(i);
                    }
                    else{
                        ans1.push_back(i);
                    }
                }
                cout<<ans1.size()<<endl;
                for(auto i : ans1) cout<<i<<" ";
                cout<<endl;
                cout<<ans2.size()<<endl;
                for(auto i : ans2) cout<<i<<" ";
                cout<<endl;

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