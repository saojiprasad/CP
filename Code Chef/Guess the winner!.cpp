#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

bool win(int n){
    if(n%2){
        return 1;
    }
    if(isprime(n)){
        return 0;
    }

    for(int i=3;i<n+1;i++){
        if(n%i==0&&isprime(i)){
            return 0;
        }
    }
    return 1;

}

    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        if(win(n)){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
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