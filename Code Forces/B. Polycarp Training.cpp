#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    sort(arr,arr+n);
    set<int>::iterator itr;
    int i=1;
    for(itr=s.begin();itr!=s.end();itr++){
        if(*itr>=i){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}