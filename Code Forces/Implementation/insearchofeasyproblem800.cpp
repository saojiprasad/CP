#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int count=0; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
        }
    }
    if(count>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
}
