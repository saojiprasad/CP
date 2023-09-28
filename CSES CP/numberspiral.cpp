#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long curr=0;
        
        if(x>=y){
            curr=(x-1)*1ll*(x-1);

            if(x%2==1){
                curr+=y;
            }
            else
                curr+=x+(x-y);
        }
        else{
            curr=(y-1)*1ll*(y-1);
            if(y%2==0){
                curr+=x;
            }
            else
            curr+=y+(y-x);
        }
        cout<<curr<<endl;

    }
}