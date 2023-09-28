#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=n;
    for(int i=0;i<n;i++){
        ans+=i*(n-i);
    }
    cout<<ans<<endl;

}