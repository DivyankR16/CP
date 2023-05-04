#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long int check=0;
    for (long long int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            break;
        }
        else{check++;}
    }
    long long int moves=0;
    for (long long int i = check; i < n-1; i++)
    {   if(arr[i]!=0){
        moves+=arr[i];}
        else{moves++;}
    }
cout<<moves<<endl;    
    
}
return 0;
}