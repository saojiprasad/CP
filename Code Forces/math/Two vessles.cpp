#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        if(a==b){
            // cout<<"Hi"<<endl;
            cout<<"0"<<endl;
        }
        else if(b>a){
            while(b>=a){
                a+=c;
                b-=c;
                
                cnt++;
                if(a==b){
                    break;
                }
                // cout<<"hi"<<endl;
            }
            //  cout<<"hi"<<endl;
            cout<<cnt<<endl;
        }
        else if(a>b){
            while(a>=b){
                 a-=c;
                b+=c;
                cnt++;
                // cout<<"hi"<<endl;
                if(a==b){
                    break;
                }
            }
            cout<<cnt<<endl;
        }
    }
}

int main(){
    solve();
}