
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}
bool isPrime(int n){
if(n<=1){
return false;}
for(int i=2 ; i<n ; i++){
if(n%i == 0){
return false;
}
return true;
}
void solve(){
int x, y;
cin>>x>>y;
int sum=x+y;
for(int i=sum+1; ; sum++){
if(isPrime(i)){
cout<<i-sum<<endl<<;
}
}
}

