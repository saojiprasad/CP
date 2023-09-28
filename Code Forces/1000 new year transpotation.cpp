#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        
    }
    int ans=0;
    int flag=1;
    for(int i=0;i<n;i+=ans){
        ans+=arr[i];
        if(t==ans){
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
}