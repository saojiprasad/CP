#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        long long  ori=arr[0]*arr[n-1]*1ll;
        vector<long long >b;
        for(long long i=2;i<=sqrt(ori);i++){
            if(ori%i==0){
                b.push_back(i);
                if(i!=(ori/i)){
                    b.push_back(ori/i);
                }
            }
        }

        sort(b.begin(),b.end());
      //  cout<<b.size()<<"-->";
        if(arr == b){
            cout<<ori<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }



    }
}