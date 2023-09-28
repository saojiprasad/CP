#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k||k<n){
            cout<<abs(k-n)<<endl;
        }
        else if(k==0||n==k){
            cout<<"0"<<endl;
        }
    }
}