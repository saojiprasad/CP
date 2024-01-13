#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>a;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            a.push_back(v);
        }
        sort(a.begin(),a.end());
        ll sum=0;
        int indexes=n-x;
        for (long long i = 0; i < n; i++) {
            if (i < indexes)
                sum += a[i];
            else
                sum -= a[i];
        }
        long long ans = sum;
        for (long long i = n - 1; i >= n - k; i--) {
            if (i >= indexes) {
                sum += a[i];
                if (indexes - 1 >= 0)
                    sum -= 2 * a[indexes - 1];
                indexes--;
                ans = max(sum, ans);
            }
        }
        cout << ans << endl;
    }

    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}