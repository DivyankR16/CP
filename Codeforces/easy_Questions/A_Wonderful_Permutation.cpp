#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int need=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    if(k==n){
        cout<<0<<endl;
    }
    else{
      int possible=n-k;
      for (int i = 0; i < k; i++)
      {
        if(arr[i]>k && possible!=0){
            need++;
            possible--;
        }
      }
      cout<<need<<endl;
      }
    
    }

return 0;
}