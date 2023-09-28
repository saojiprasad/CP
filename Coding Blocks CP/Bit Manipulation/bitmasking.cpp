#include<iostream>
using namespace std;

int main(){
    int n=5;
    int i=2;
    int ans=0; 
    int temp=1;
    temp=temp<<i;
    // ans=ans<<i;
    // if(n&ans){
    //     cout<<"1"<<endl;
    // }
    // else{
    //     cout<<"0"<<endl;
    // }
    int final;
    if(ans==1){
        final=(n|temp);
    }
    else{
        temp=~temp;
        final=(n&temp);
    }
    cout<<final;
}