#include<bits/stdc++.h>
using namespace std;

void remove(char s[]){
    int length=strlen(s);
    if(length<=1){
        return;
    }
    if(s[0]==s[1]){
        int i=1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        remove(s);
    }else{
        remove(s+1);
    }
}

int main(){
    char str[100];
    cin>>str;
    remove(str);
    cout<<str;
}