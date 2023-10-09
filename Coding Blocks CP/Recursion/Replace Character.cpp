#include<bits/stdc++.h>
using namespace std;

void replace(char str[]){
    if(str[0]=='\0'){
        return;
    }

    if(str[0]!='b'){
        replace(str+1);
    }
    else{
        str[0]='x';
        replace(str+1);
    }
}


int main(){
    char str[100];
    cin>>str;
    replace(str);
    cout<<str;
}