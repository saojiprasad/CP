#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int num){
    if(num<2){
        return false;
    }
    for(int i=0;i*i<=num;i++){
        if(num%i==0){
        return false;
        }
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>prime;
    for(int i=2;i<n;i++){
        bool flag=1;
        for(int j=2;j*j<=i;j++){
           if(i%j==0){
               flag=0;
           }
        }
        if(flag==1){
            prime.push_back(i);
        }
    }
    int ans=0;
    for(int i=0;i<prime.size();i++){
        if(i+1<prime.size()){
            int num=1+prime[i]+prime[i+1];
            if(isprime(num)&&num<=n){
                ans++;
            }
        }
    }
    if(ans>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}