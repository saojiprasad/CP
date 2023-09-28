#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a;

    long long sum=(n*(n+1))/2;
    long long ori=0;
    for(long long i=0;i<n-1;i++){
        cin>>a;
        ori+=a;
    }
    long long ans=sum-ori;
    cout<<ans<<endl;
}