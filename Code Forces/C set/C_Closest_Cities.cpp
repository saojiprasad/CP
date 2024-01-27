#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        int arr[n];
        int diff[n-1];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(i>=1){
                diff[i-1]=abs(arr[i]-arr[i-1]);
            }
        }
        int dis[n];
        dis[0]=1;
        for(int i=1;i<n-1;i++){
            if(diff[i-1]>diff[i]){
                dis[i]=i+1;
            }else{
                dis[i]=i-1;
            }
        }
        dis[n-1]=n-1;

        int q;
        cin>>q;
        while(q--){
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            int ans=0;
            if(a<b){
                for(int i=a;i<b-1;i++){
                    if(dis[i]<dis[i+1]){
                        ans++;
                    }else{
                        ans+=diff[i+1];
                    }
                }
                ans++;
                cout<<ans<<endl;
            }else{
                    for(int i=a;i>b;i--){
                        if(dis[i]>dis[i-1]){
                            ans++;
                        }else{
                            ans+=diff[i];
                        }
                    }
                    cout<<ans<<endl;
            }



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