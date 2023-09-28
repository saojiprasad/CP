#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
	cin>>t;
	while(t--){
        double n;
        cin>>n;
        double ans=(n/100)*20;
        double final=ceil(100/ans);
        cout<<final<<endl;
    }
}

int main() {
	solve();
	return 0;
}
