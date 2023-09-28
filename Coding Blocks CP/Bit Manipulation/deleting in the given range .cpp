#include<iostream>
using namespace std;


int main(){
    int i=1;
    int j=3;
    int n=31;
    int a=(-1<<(j+1));
    int b=(1<<i)-1;
    int mask=(a|b);
    cout<<(n&mask);


}