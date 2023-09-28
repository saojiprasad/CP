#include<iostream>
using namespace std;
bool isprime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        count++;
    }
    if(count==0){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int n;
    cin>>n;
    
    int almost=0;
    for(int i=0;i<=n;i++){
        int count=0;
        for(int j=2;j<=i;j++){
            int ans=0;
            if(i%j==0){
                ans=isprime(j);
                if(ans==1){
                    count++;
                }
            }
        }
        if(count==2){
            almost++;
        }
    }if(n<6){
        cout<<"0"<<endl;
    }
    else
    cout<<almost<<endl;
}