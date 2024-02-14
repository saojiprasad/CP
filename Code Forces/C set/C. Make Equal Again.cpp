#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
const ll N = 1e5+5, M = 100+2, mod = 1e9+7;

void solve(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], cnt = 1, cnt1 = 1;
        for(auto &i: a) cin >> i;
        if(n == 1){
            cout << "0\n";
            continue;
        }
        for (int i = 1; i < n; i++)
            if(a[0] == a[i]) cnt++;
            else break;
        for (int i = n-2; i >= 0; i--)
            if(a[n -1] == a[i]) cnt1++;
            else break;
        if(a[0] == a[n-1])cout << max(ll(0), n - cnt - cnt1) << '\n';
        else cout << n - max(cnt, cnt1) << '\n';
    }
}

int main(){

    solve();
}