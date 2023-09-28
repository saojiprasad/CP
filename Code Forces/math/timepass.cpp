#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for(n) for(i=0; i<n; i++)
/// cout << (c ? "NO" : "YES")  << endl;///c(1)=NO

void solve()
{
    int n,x,p,i,j,r,k,c=0,sum=0,mi= INT_MAX;
    cin>>n;
    int a[n];
    for(n){
        cin>>a[i];
    }
    cout<<i<<"??";
    for(n){
        if(i==0){
            x = max(abs(a[i]-a[i+1]),0);
        }
        else if(i==n-1){
            x = max(abs(a[i]-a[i-1]),0);///
        }
        else{
            // cout<<i<<"-->";
            x = max(abs(a[i]-a[i-1]) , abs(a[i]-a[i+1]));///
        }
        mi = min(mi,x);///30
    }
    // cout<<mi<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}