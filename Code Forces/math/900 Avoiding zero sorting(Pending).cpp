#include<bits/stdc++.h>
using namespace std;



void solve (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int sum=0;
        int i=0;
        
        while(i!=n-1){
            sum+=v[i];
            if(sum==0){
                swap(v[i],v[i+1]);
                i=0;
                sum=0;
            }
            if(i==n-1){
                if(sum==0){
                    break;
                }
            }
            if(sum!=0)
            i++;
            
            cout<<sum<<" ";
        }
        for(int i:v){
            cout<<i<<" ";
        }
    }
}

int main(){
    solve();
}