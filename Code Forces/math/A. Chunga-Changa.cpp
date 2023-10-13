#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll sum=a+b;
    ll aa=a/n;
    ll bb=b/n;
    ll nexta=n*(aa+1);
    ll nextb=n*(bb+1);
    ll mini=INT64_MAX;
    if(a%n==0&&b%n==0){
        mini=0;
    }
    else if(a%n==0||b%n==0){
        mini=0;
    }
    else if((sum/n)==((a/n)+(b/n))){
        mini=0;
    }
    else
    mini=min((nexta-a),(nextb-b));
    cout<<sum/n<<" "<<mini;
}

int main(){
    solve();
}