#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int arr[3][3];
        int a=0,b=0,c=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char temp;
                cin>>temp;

                if(temp=='A') a++;
                else if(temp=='B') b++;
                else c++;
                }
            }

            if(a==2)cout<<'A'<<endl;
            else if(b==2) cout<<'B'<<endl;
            else cout<<'C'<<endl;
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