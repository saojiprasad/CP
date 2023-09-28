#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int cnt=0;
        for(cnt=0;cnt<n;cnt++) {
        if(s[cnt]=='1')
        break;
        }
        
        if(cnt>=n-2) 
        cout<<s<<endl;
        else{
            
            for(int i=cnt+1;i<n;i++){
            s[i]='0';
            }
            
            cout<<s<<endl;
        }
    }
	return 0;
}
