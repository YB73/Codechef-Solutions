#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[6];
        for(int i=0;i<6;i++){
            cin>>arr[i];
        }
        if( arr[2]==arr[0] || arr[2]==arr[1]){
           if(arr[3]==arr[1] || arr[3]==arr[0]){
           cout<<"1"<<endl;
           }
           else{
            cout<<"0"<<endl;
        }
        }
        else if(arr[4]==arr[0] || arr[4]==arr[1]){
            if(arr[5]==arr[1] || arr[5]==arr[0]){
                cout<<"2"<<endl;
            }
            else{
            cout<<"0"<<endl;
        }
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}