#include<iostream>
using namespace std;
int main(){
int a , b , T ;
cin>>T;
while(T--){
cin>>a>>b;
if(a > b){
cout<<">"<<endl;
}
else if( a < b){
cout<<"<"<<endl;
}
else {
cout<<"="<<endl;
}
}
}
