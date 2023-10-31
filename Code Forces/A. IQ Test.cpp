#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    vector<vector<char>>v(4,vector<char>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
            int has=0;
            int dot=0;
            if(v[i][j]==v[i+1][j]&&v[i+1][j]==v[i][j+1]&&v[i+1][j+1]){
                cout<<"YES"<<endl;
                return;
            }
            if(v[i][j]=='#') has++;
            if(v[i+1][j]=='#') has++;
            if(v[i][j+1]=='#') has++;
            if(v[i+1][j+1]=='#') has++;

            if(v[i][j]=='.') dot++;
            if(v[i+1][j]=='.') dot++;
            if(v[i][j+1]=='.') dot++;
            if(v[i+1][j+1]=='.') dot++;

            if(has==3||dot==3){
                cout<<"YES"<<endl;
                return;
            }
        }

    }
    cout<<"NO"<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}