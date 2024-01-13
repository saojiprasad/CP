#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int countElementsInRange(vector<int>& vec, int lower, int upper) {
    return count_if(vec.begin(), vec.end(), [=](int num) {
        return num >= lower && num <= upper;
    });
}

void solve(){
        
        int n;
        cin>>n;
        int s=INT_MIN;
        int e=INT_MAX;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x==1){
                s=max(s,y);
            }
            if(x==2){
                e=min(e,y);
            }
            if(x==3){
                v.push_back(y);
            }
        }
        if(s>e){
            cout<<0<<endl;
        }else{
            int ans=e-s+1;
            for(auto i : v){
                if(i>=s&&i<=e){
                    ans--;
                }
            }
            cout<<ans<<endl;
        }

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