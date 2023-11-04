// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int neg=0;
//     bool flag=true;
//     bool positi=true;
//     int pos=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(flag==true&&arr[i]<0){
//             neg=arr[i];
//             arr[i]=0;
//             flag=false;
//         }
//         if(arr[i]>0&&positi==true){
//             pos=arr[i];
//             positi=false;
//         }
//     }
//     vector<int>negi;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0&&negi.size()<2){
//             negi.push_back(arr[i]);
//         }
//     }


//     cout<<1<<" "<<neg<<endl;
//     if(!positi){
//         cout<<1<<" "<<pos<<endl;
//     }
//     else{
//         cout<<2<<" "<<negi[0]<<" "<<negi[1]<<endl;
//     }
//     cout<<1<<" "<<0<<endl;
// }


// int main(){
//     solve();
// }


#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(vector<int>::iterator it=arr.begin();it!=arr.end();++it){
        if(*it<0){
            cout<<"1 "<<*it<<endl;
            arr.erase(it);
            break;
        }
    }
    bool flag=true;
    for(vector<int>::iterator it=arr.begin();it!=arr.end();++it){
        if(*it>0){
            cout<<"1 "<<*it<<endl;
            arr.erase(it);
            flag=false;
            break;
        }
    }
    if(flag==true){
        int count=0;
        cout<<"2";
        for(vector<int>::iterator it=arr.begin();count<2;){
            if(*it<0){
                cout<<" "<<*it;
                // arr.erase(it);
                it = arr.erase(it);
                ++count;
                // cout<<"HO"<<endl;
            }
            else{
                ++it;
            }
        }
        cout<<endl;
    }
    cout<<arr.size();
    for(auto i:arr){
        cout<<" "<<i;
    }
    cout<<endl;
    
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}