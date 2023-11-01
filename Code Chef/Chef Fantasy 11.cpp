#include<bits/stdc++.h>
#define ll long long
using namespace std;

int factorial(int n){
    if (n==0||n==1) return 1;
    return n*factorial(n-1);
}

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n*(n-1)<<endl;
    }  
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}