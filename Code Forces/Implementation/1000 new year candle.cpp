#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum=a;
    int rem=0;
    while(a>=1){
        a=a/b;
        sum+=a;
    }
    cout<<sum<<endl;
    
}