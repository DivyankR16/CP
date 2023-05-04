#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN,mi;
    int min=INT_MAX,mni;
    int max1=INT_MIN,m1i;
    int min1=INT_MAX,mn1i;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
            mi=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
            mni=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max1 && i!=mi){
            max1=arr[i];
            m1i=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min1 && i!=mni){
            min1=arr[i];
            mn1i=i;
        }
    }
    cout<<max+max1-min1-min<<endl;
    
}
return 0;
}