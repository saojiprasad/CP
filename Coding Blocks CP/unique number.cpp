#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int ans=0;

    for(int i=0;i<n;i++){
        cin>>a;
        ans=ans^a;
    }

    cout<<ans<<endl;
}