#include<iostream>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    int primes[8]={2,3,5,7,11,13,17,19};
    while(t--){
        int n;
        cin>>n;
        int subsets=(1<<8)-1;
        ll ans=0;
        for(int i=1;i<subsets;i++){
            ll denom=1ll;
            int setbits=__builtin_popcount(i);
            for(int j=0;j<8;j++){
                if(i&(1<<j)){
                    denom*=primes[j];
                }
            }
            if(setbits%2==1){
                ans+=n/denom;
            }
            else{
                ans-=n/denom;
            }
        }
            cout<<ans<<endl;
    }
}