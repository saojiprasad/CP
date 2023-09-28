#include<iostream>
using namespace std;

void filterchar(int n,char a[]){
    int j=0;
    while(n>0){
        int setbits=(n&1);
        if(setbits)
        cout<<a[j];

        j++;
        n>>=1;

    }
    cout<<endl;

}

void printsubsets(char a[]){
    int n=sizeof(a);
    for(int i=0;i<(1<<n);i++){
        filterchar(i,a);
    }
}

int main(){
    char a[100];
    int n=3;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printsubsets(a);
}