#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n+1;i++){

        for(int j=0;j<(n-i)*2-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(i==n){
                cout<<j<<" ";
            }
            else
            cout<<" "<<j;


        }
        for(int j=i;j>0;j--){
            if(i==n){
                cout<<j-1;

            }
            else
            cout<<" "<<j-1;
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<j<<" ";
        }
        for(int j=n-1;j>i;j--){
            cout<<j-i-1<<" ";
        }
        cout<<endl;
    }



}