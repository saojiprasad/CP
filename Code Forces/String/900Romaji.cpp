#include<iostream>
using namespace std;

bool isvowel(char a){
    return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
}

void solve (){
    string s;
    cin>>s;
    bool okay=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='n'){

        }
        else if(!isvowel(s[i])&&!isvowel(s[i+1])){
            okay=true;
        }
    }
     if(!okay){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}

int main(){

    solve();

}