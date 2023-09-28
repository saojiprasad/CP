#include<iostream>
using namespace std;

void multiply(int *a,int &n,int no){
    int carry=0;
    for(int i=0;i<n;i++){
        int pro=a[i]*no+carry;
        a[i]=pro%10;
        carry=pro/10;
    }
    while(carry){
        a[n]=carry%10;
        carry/=10;
        n++;
    }
}

void bigfactorial(int number){

    int *arr=new int[1000];
    for(int i=0;i<1000;i++){
        arr[i]=0;
    }
    arr[0]=1;
    int n=1;
    for(int i=2;i<=number;i++){
        multiply(arr,n,i);
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
    delete[] arr;
}

int main(){
    int n;
    cin>>n;
    bigfactorial(n);
}