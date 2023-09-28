#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int powerof(int a,int n){
    if(n==0){
        return 1;
    }
    int subproblem=pow(a,n/2);
    if(n&1){
        return a*subproblem*subproblem;
    }
    return subproblem*subproblem;
}


int main(){
    int a,n;
    cin>>a>>n;
    int ans=powerof(a,n);
    cout<<ans;
}