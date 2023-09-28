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
	    //int n=s.length();
	    
	    int zero=0;
	    int one=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            zero++;
	        }
	        else{
	            one++;
	        }
	    }
	   // int count=0;
	    
	   // while(one!=0&&zero!=0){
	   //     one--;
	   //     zero--;
	   //     count++;
	   // }
	   // if(count%2==0){
	   //     cout<<"Ramos"<<endl;
	   // }
	   // else{
	   //     cout<<"Zaltan"<<endl;
	   // }
	   int minPair = min(one,zero);
	   if(minPair%2==0){
	         cout<<"Ramos"<<endl;
	     }
	     else{
	         cout<<"Zlatan"<<endl;
	     }
	    
	    
	    
	}
	return 0;
}
