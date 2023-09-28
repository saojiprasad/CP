#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            sum1+=arr1[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        if(sum1==sum2){
            cout<<"0"<<endl;
        }
        else{
            int count=0;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if(arr1[i]==arr2[j]){
                    swap(arr1[j],arr2[j]);
                    count++;
                }
            }
        }
        cout<<(sum1-sum2)<<endl;
        }

    }
}