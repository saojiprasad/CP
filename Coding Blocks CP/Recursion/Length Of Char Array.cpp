#include<bits/stdc++.h>
using namespace std;

void remove(char s[]){
    if(s[0]=='\0'){
        return;
    }

    if(s[0]!='x') {
        remove(s+1);
    }
    else{

            int i=1;
            for(;s[i]!='\0';i++){
                s[i-1]=s[i];
            }
            s[i-1]=s[i];
            remove(s);
    }
}


int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int smallstr=length(str+1);
    return smallstr+1;
        
}

int main(){
    char str[100];
    cin>>str;

    int l=length(str);
    cout<<l<<endl;
    remove(str);
    l=length(str);
    cout<<l<<endl;
    cout<<str<<endl;
    
}