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
    int ans[n];
    if(n!=1){
    for (int i = 0; i < n; i++)
    {
        ans[i]=i+1;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==ans[i]){
            int f=ans[i+1];
            ans[i+1]=ans[i];
            ans[i]=f;
        }
    }
    if(arr[n-1]==ans[n-1]){
        int temp=ans[n-1];
        ans[n-1]=ans[n-2];
        ans[n-2]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    }
    else{cout<<-1<<endl;}
    
    
    
}
return 0;
}