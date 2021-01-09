#include<iostream>
using namespace std;
int sum(int D , int N){
if (D == 0){
return N ;}
return sum( D-1 , N*(N+1)/2) ; 
}
int main(){
int a , n , T;
cin>>T;
while(T--){
cin>>a>>n;
int ans = sum(a,n) ;
cout<<ans<<endl;
}
}
