#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<"2"<<" "<<n<<endl;
        }
        else{
            cout<<"2"<<" "<<(n-1)<<endl;
        }
    }
}