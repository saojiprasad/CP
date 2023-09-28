#include<iostream>
using namespace std;

int clearrange(int n,int i,int j){
int a=(-1<<(j+1));
    int b=(1<<i)-1;
    int mask=(a|b);
    // cout<<(n&mask);
    return (n&mask);
}

int replacebits(int n,int m,int i,int j){
    int n_=clearrange(n,i,j);
    int ans=(n_|(m<<i));
    return ans;
}

int main(){
    int i=1;
    int j=3;
    int n=15;
    int m=2;
    
    // int clear=clearrange(n,i,j);
   cout<<replacebits(n,m,i,j);


}