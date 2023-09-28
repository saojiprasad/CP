#include<iostream>
using namespace std;

int poweroptimised(int a,int n){
    int ans=1;
    while(n>0){
        int lastbit=(n&1);
        if(lastbit)
        ans*=a;

         a*=a;
        n>>=1;
    }
   
    return ans;
}

int main(){
    int a=2;
    int n=10;
    cout<<poweroptimised(a,n)<<endl;
}