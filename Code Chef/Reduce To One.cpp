#include <iostream>
using namespace std;
#define MOD 1000000007
void solve(){
    int t;
    cin>>t;
    long long arr[1000001];
    for(int i=1;i<1000001;i++){
            
            arr[i]=(arr[i-1]+i+(i*arr[i-1]))%MOD;
        }
    while(t--){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	solve();
	return 0;
}
