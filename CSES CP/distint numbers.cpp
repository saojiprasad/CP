#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a;
    unordered_map<long long,long long>mp;
    for(long long i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
    cout<<mp.size()<<endl;
}