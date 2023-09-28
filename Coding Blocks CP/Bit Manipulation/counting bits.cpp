#include<iostream>
using namespace std;

int countbits(int n){//Time complexity is O(log n+1) times the given Number
    int ans=0;
    while(n!=0){
        ans+=(n&1);
        n>>=1;
    }
    return ans;
}

int countbitsfast(int n){//Time complexity is Number of set bits present in Given number 
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int n=13;
    cout<<countbits(n)<<endl;
    
    cout<<countbitsfast(n)<<endl;

    //Third Method is Built in method it will give us the binary representation of a number directly
    cout<< __builtin_popcount(n)<<endl;
}
