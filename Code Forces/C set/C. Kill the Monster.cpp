#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
        ll hc,ac,hm,am;
        cin>>hc>>ac>>hm>>am;
        ll k,w,a;
        cin>>k>>w>>a;
        bool flag=false,flag1=false;
        if(k==0){
            ll cdiv=hm/ac;
            ll mdiv=hc/am;
            cout<<cdiv<<"   "<<mdiv<<endl;
            if(cdiv<=mdiv||cdiv==1){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        for(int i=0;i<k;i++){
            ll temphealth=hm;
            ll tempattack=ac;
            temphealth+=(k-i)*a;
            tempattack+=i*w;
            ll attcha=hm/tempattack;
            ll attmon=temphealth/am;
            if(attcha<=attmon|| attcha==1){
                flag=true;
                break;
            }
        }
        for(int i=0;i<k;i++){
            ll temphealth=hc;
            ll tempattack=ac;
            temphealth+=i*a;
            tempattack+=(k-i)*w;
            ll attcha=hm/tempattack;
            ll attmon=temphealth/am;
            if(attcha<=attmon|| attcha==1){
                flag1=true;
                // cout<<"ALLO mi"<<endl;
                break;
            }
        }

        if(flag||flag1==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}