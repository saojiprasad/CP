#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=n-1;
        int a=0,b=0;
        ll asum=arr[0];
        ll bsum=arr[n-1];
        while(i<=j){
            if(asum>bsum){
                j--;
                bsum+=arr[j];
                b++;
            }
            else{
                
                i++;
                asum+=arr[i];
                a++;
            }
            // if(i==j-1) break;
            // if(i+1==j) break;
        }
        cout<<a<<" "<<b;



}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}