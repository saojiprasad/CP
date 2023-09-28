#include<bits/stdc++.h>
using namespace std;
#define ll long long

char ss(int n){
    char arr[10]={'0','0','2','3','4','5','6','7','8','9'};
    return arr[n];
}

int main(){
    ll a,b;
    cin>>a>>b;
    string s="";
    string s1;
    s1=ss(b);
    if(a<2&&b==10){
        cout<<"-1"<<endl;
    }
    else if(a>=2&&b==10){
        for(int i=0;i<a-1;i++){
            s+='1';
        }
        s+='0';
        cout<<s<<endl;
    }
    else{ 
        
        for(int i=0;i<a;i++){
            s+=s1;
        }
        cout<<s<<endl;
    }
}