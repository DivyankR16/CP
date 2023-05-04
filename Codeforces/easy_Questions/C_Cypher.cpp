#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int v;
    string s;
    for (int i = 0; i < n; i++)
    {cin>>arr[i];}
    for (int i = 0; i < n; i++)
    {cin>>v;
    if(v==0){
        continue;
    }
    cin>>s;
     for (int j = 0; j < v; j++)
     {if(s[j]=='U'){
        arr[i]=(10+arr[i]-1)%10;
     }
     else if(s[j]=='D'){
        arr[i]=(arr[i]+1)%10;
     }
     }
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

    
}
return 0;
}