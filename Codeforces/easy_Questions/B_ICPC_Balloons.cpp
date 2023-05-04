#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int arr[26]={0};
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]-'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>1){
            ans+=arr[i]+1;
        }
        else if(arr[i]==1){
            ans+=2;
        }
        else{
            ans+=arr[i];
        }
    }
    cout<<ans<<endl;
}
return 0;
}