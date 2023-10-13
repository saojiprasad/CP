#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        long long int counta=0;
        long long int countb=0;
        vector<long long int>v(n);
         for(int i=0;i<n;i++){
             cin>>v[i];
         }
         for(int i=0;i<n;i++){
             long long int d=(1)*a;
             long long int e=v[i];
             if((e%d)==0){
                 counta++;
                 v.pop_back();
             }
             else{
                 
                 long long int f=(1)*b;
                 if((e%f)==0){
                     countb++;
                     v.pop_back();
                 }
             }
             
         }
         
         if(countb>counta){
             cout<<"ALICE"<<endl;
         }
         else{
             cout<<"BOB"<<endl;
         }
         
    }
}

int main() {
	solve();
	return 0;
}
