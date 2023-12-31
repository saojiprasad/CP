#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        int arr[n];
        ll pro=1;
        bool flag1=false;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i]=a;
            pro*=a;
            if(a==2023||pro==2023){
                flag1=true;
            }
        }
        if(flag1){
            cout<<"YES"<<endl;
            for(int j=0;j<k;j++){
                cout<<1<<" ";
            }
            cout<<endl;
            return;
        }

        ll num=pro;
        int i=2;
        bool flag=false;
        while(num<2023){
            num=pro;
            num*=i;
            if(num==2023){
                flag=true;
                break;
            }
            // cout<<num<<endl;
            i++;
        }
        
        if(flag){
            cout<<"YES"<<endl;
            cout<<i<<' ';
            for(int j=1;j<k;j++){
                cout<<1<<" ";
            }
            cout<<endl;
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
    while(t--){
    solve();
    }
    return 0;
}