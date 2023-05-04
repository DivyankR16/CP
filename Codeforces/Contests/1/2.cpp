#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++){
    cin>>arr[i];}
    int c=0,count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==1){
         c++;}
    }
    if(c==n){
        cout<<0<<endl;
    }
    else if(c==0){
       for (int i = 0; i < n; i++)
       {while(arr[i]%2!=1){
           arr[i]=arr[i]/2;
           count++;}
           arr1[i]=count;
           count=0;}
        count=arr1[0];
       for (int i = 1; i < n; i++)
       {
           if(arr1[i]<count){
               count=arr1[i];
           }
       }
       
       cout<<count+n-1<<endl;
    }
    else{
        cout<<n-c<<endl;
    }
    }
return 0;
}