#include<bits/stdc++.h>
using namespace std;

void solve(){
    
        int a,b;
        cin>>a>>b;
        int aa[a],bb[b];
        int arr[b];
        for(int i=0;i<a;i++){
            cin>>aa[i];
        }
        // cout<<"HI"<<" "<<endl;
        for(int i=0;i<b;i++){
            cin>>bb[i];
        }
        // cout<<"HI"<<" "<<endl;

        int i=0;
        while(i<b){
            // cout<<"HI"<<" ";
            int x=bb[i];
            int pos=0;
            for(int j=0;j<a;j++){
                    if(aa[j]==x){
                        pos=j+1;
                        break;
                    }
            }
            for(int j=pos-1;j>0;j--){
                aa[j]=aa[j-1];
            }
            aa[0]=x;
            arr[i]=pos;
            i++;
        }
        for(auto i:arr){cout<<i<<" ";
        }
}

int main(){
    solve();
}