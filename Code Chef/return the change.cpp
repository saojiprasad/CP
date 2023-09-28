#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    
    double result = static_cast<double>(n) / 10;
    int ans=100-round(result)*10;
    cout <<ans << endl;
    } 
    return 0;
}

