#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%3==0) c0++;
            else if(arr[i]%3==1) c1++;
            else c2++;
        }
        int maxi=max(c0,max(c1,c2));
        int mini=min(c0,min(c1,c2));
        // cout<<c0<<" "<<c1<<' '<<c2<<endl;
        int final=0;
        while(c0!=c1||c1!=c2){
            int ans=0;
            if((maxi==c0&&mini==c1)){
                ans++;
                c0--;
                c1++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            else if((maxi==c1&&mini==c2)){
                ans++;
                c1--;
                c2++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            else if((maxi==c2&&mini==c0)){
                ans++;
                c2--;
                c0++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            else if((maxi==c1&&mini==c0)){
                ans+=2;
                c1--;
                c0++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            else if((maxi==c2&&mini==c1)){
                ans+=2;
                c2--;
                c1++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            else if((maxi==c0&&mini==c2)){
                ans+=2;
                c0--;
                c2++;
                maxi=max(c0,max(c1,c2));
                mini=min(c0,min(c1,c2));
            }
            final+=ans;
            // cout<<"jo"<<" ";
            
        }
        cout<<final<<endl;

    }
}

int main(){
    solve();
}