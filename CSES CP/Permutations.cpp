#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else if(n<4){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
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