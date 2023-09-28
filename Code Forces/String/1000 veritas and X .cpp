#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }       
    }
    bool ans=true;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            if(arr[i][j]!=arr[0][0]){
                ans=false;
                break;
            }
        }
        if(i==n-j-1&&j==n-i-1){
            if(arr[i][j]!=arr[0][0]){
                ans=false;
                break;
            }
        }
    }       
    }
    // for(int i=0;i<n;i++){
    // for(int j=0;j<n;j++){
        

    // }       
    // }


    int count=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==arr[0][1])
        count++;
    }       
    }
    int nondia=(n*n)-(n*2-1);
    // cout<<nondia;
    if(ans==true&&count==nondia){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    

}