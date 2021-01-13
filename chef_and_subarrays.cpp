#include<iostream>
using namespace std;
int getans(int arr[] , int n){
    int count = 0 ,i ,j ;
    for( i =0 ; i<n ; i++){
        int sum=0 ;
        int prod = 1;
        for(j=i;j>=0;j--){   //we need to visit all subarrays ending at i. All subarrats must end at i
            sum = sum + arr[j] ;
            prod = prod*arr[j] ;
             if (sum == prod){
            count = count + 1 ;
        }
        }
       
    }
    return count ;

}
int main(){
    int n , T , i  ;
    cin>>T;
    while(T--){
        cin>>n;
        int arr[n] ;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = getans(arr,n) ;
        cout<<ans;
        cout<<endl;
    }
}
// IT IS VERY IMPORTANT THAT J LOOP GOES DOWN. We need new sums and products instead of the old ones.
// For eg. suppose we have an array say {1,2,3,4,5}.Now if j loop goes upwards from 1 to i...
// We would have
/* 1
1 , {1,2}
1 , {1,2} , {1,2,3}
1 , {1,2} , {1,2,3,4} and so on..
But this excludes {2} , {2,3} , {2,3,4} and so on...
So j needs to go down
If j goes down then..:
1
2 , (2,1) 
3 , {3,2} , {3,2,1} and so on and so forth.. */ 