#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=0;
    // int max=0;

    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
        ans=ans+arr[i]-arr[i+1];
        arr[i+1]=arr[i];
        }
    }
    
    cout<<ans<<endl;
    
    
}