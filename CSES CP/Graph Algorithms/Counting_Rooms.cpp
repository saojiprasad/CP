#include<bits/stdc++.h>
using namespace std;
int vis[1005][1005];
// int ans=0;
void solve(vector<vector<char>>v,int i,int j,int n,int m){
    vis[i][j]=1;

    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
            
            for(int c=0;c<4;c++){
                int x=dx[c] +i;
                int y=dy[c] +j;
                if (x >= 0 && x < n && y >= 0 && y < m) {
                char cha=v[x][y];
                if(cha=='.'&& vis[x][y]==0){
                solve(v,x,y,n,m);
            }
            
        }
    }
}


    



int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,(vector<char>(m)));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            v[i][j]=x;
            if(x=='#'){
                vis[i][j]=1;
            }
        }
    }


    int ans=0;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            char ch=v[a][b];
                if(ch=='.'&&vis[a][b]==0){
                    ans++;
                    solve(v,a,b,n,m);
                    
                }
                
        }
    }
    cout<<ans;

}