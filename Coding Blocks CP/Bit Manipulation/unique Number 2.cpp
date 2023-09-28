#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100005];
	int no;
	int res=0;
	for(int i=0;i<n;i++){
		cin>>no;
		arr[i]=no;
		res=res^no;
	}
	int temp=res;
	int pos=0;
	while((temp&1)!=1){
		pos++;
		temp>>=1;
	}
	int x=0,y=0;
	int mask=1<<pos;
	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){
			x=x^arr[i];
		}
		y=res^x;
	}
	
	cout<<min(x,y)<<" "<<max(x,y)<<endl;
	return 0;

}