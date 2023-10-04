#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s,ss;
        cin>>s>>ss;
        long long mini=0;
        long long ans=INT16_MAX;
        for(int i=0;i<=n-m;i++){
            // count=i;
            mini=0;
            for(int j=0;j<m;j++){
                int a=abs(s[i+j]-'0');
                int b=abs(ss[j]-'0');
                int sum = abs(a - b);
                cout<<sum<<"  ";
                if(sum>5){
                    sum=10-sum;
                }
                mini+=sum;
                
                // i++;
            }
            // i=count;
            
            
            ans=min(mini,ans);
        }
        cout<<ans<<endl;
    }
    
}

int main(){
    solve();
}

