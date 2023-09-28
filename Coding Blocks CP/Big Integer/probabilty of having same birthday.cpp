#include<iostream>
using namespace std;

int main(){
    double prob=100;
    double i;
    if(prob==100){
        cout<<"366"<<endl;
        return 0;
    }
    for(i=0;i<365;i++){
        prob*=(365-i)/365;
        cout<<prob<<" ";
        if(prob<=100){
            break;
        }
    }
    cout<<i+1<<endl;
    
}