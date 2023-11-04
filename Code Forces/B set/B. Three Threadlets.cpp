#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int mini=min(a,min(b,c));
        bool flag=true;
        int cnt=0;
        
        if(a%mini!=0||b%mini!=0||c%mini!=0){
            flag=false;
            }

        while(a!=mini){
            if(a%mini!=0||cnt>3){
                flag=false;
                break;
            }
            a-=mini;
            cnt++;
        }
        while(b!=mini){
            if(b%mini!=0||cnt>3){
                flag=false;
                break;
            }
            b-=mini;
            cnt++;
        }
        while (c!=mini)
        {
            
        if(c%mini!=0||cnt>3){
                flag=false;
                break;
            }
            c-=mini;
            cnt++;
        }
        if(cnt>3) flag=false;

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    solve();
}