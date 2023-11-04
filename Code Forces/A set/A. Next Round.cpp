#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ok=arr[k-1];
    
    for(int i=0;i<n;i++){
        if(arr[i]==0)continue;
        else if(arr[i]>=ok){
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
}

int main(){
    solve();
}