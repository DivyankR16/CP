#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {cin>>arr[i];}
    int a=arr[0];
    int b=arr[0];
    int ans=0;
    for (int i = 1; i < n; i++)
    {if(arr[i]>a){
        a=arr[i];
    }
    else if(arr[i]<b){
        b=arr[i];
    }
    if(a-b>2*x){
        a=b=arr[i];
        ans++;
    }
    }
    cout<<ans<<endl;
    
}
return 0;
}