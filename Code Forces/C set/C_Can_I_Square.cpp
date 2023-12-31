#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }

        double squrt=sqrt(sum);

        if(squrt==floor(squrt)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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