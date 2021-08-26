#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
       cin>>n;
       int x;
       vector<int> v;
       for(int i=0;i<n;i++){
         cin>>x;
         v.push_back(x);
       }
       sort(v.begin(), v.end());
       cout<<v[0]*(n-1)<<endl;
   }
   return 0;
}
