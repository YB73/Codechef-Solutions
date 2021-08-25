#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a;
    int n;
    while(t--){
        cin>>n>>a;
        if(n<10 && n>0){
            if(n==4){
                cout<<2*a<<endl;
            }
            else{
                int x = n/a;
                cout<<x*a<<endl;
            }
        }
        else{
            
        }
      
    }

}

/*
  if(sqrt(n)%2==0){
            
        }
        */