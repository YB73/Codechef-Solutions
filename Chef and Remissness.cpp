#include<iostream>
using namespace std;
int main(){
    int a , b , T ;
    cin>>T;
    while(T--){
        cin>>a>>b;
        if(a>b){
            cout<<a<<" ";
        }
        else{
            cout<<b<<" ";
        }
        cout<<a+b;
        cout<<endl;
    }
}
