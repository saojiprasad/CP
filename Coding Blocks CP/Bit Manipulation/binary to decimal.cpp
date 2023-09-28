#include<iostream>
#include<math.h>
using namespace std;

void binarytodecimal(int n){
    int p=1,ans=0;
    while(n>0)
    {
        int lastbit=(n&1);
        ans+=p*lastbit;
        p*=10;
        n>>=1;
    }
    cout<<ans<<endl;
    
}

int main(){
    int n=8; 
    binarytodecimal(n);
}