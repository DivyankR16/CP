#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        if(arr[n+i]-arr[i]<x)
        {flag=false;
        break;}
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{cout<<"No"<<endl;}
    
    
}
return 0;
}