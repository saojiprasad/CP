#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    int n=10;
    while(t--){
        int sum=0;
    vector<vector<char>> v(n, vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            v[i][j] = x;

            if(v[i][j]=='X'){
                if(j==0||j==9||i==0||i==9){
                    sum+=1;
                }
                else if(j==1||j==8||i==1||i==8){
                    sum+=2;
                }
                else if(j==2||j==7||i==2||i==7){
                    sum+=3;
                }
                else if(j==3||j==6||i==3||i==6){
                    sum+=4;
                }
                else 
                {
                    sum+=5;
                }
            }

        }
    }
    cout<<sum<<endl;
    }


}

int main(){
    solve();
}