#include <iostream>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        
        ll sum=0;
        
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++)
            {
                sum+=(arr[i]*arr[j]);
            }
        }
        cout<<sum<<endl;   
    }
}
    
    int main() {
	solve();
	return 0;
}
