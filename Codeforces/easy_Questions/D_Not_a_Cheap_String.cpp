#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string r=s;
    int p;
    cin>>p;
    int arr[26]={0};
    int sum=0;
    for (int i = 0; i < s.length(); i++)
    {sum+=(s[i]-'a'+1);}
    sort(r.begin(),r.end());
    for (int i = r.length()-1; i >= 0; i--)
    {if(sum>p){
        sum-=r[i]-'a'+1;
        arr[r[i]-'a']++;
    }}
    for (int i = 0; i < s.length(); i++)
    {if(arr[s[i]-'a']>0){
        arr[s[i]-'a']--;
        continue;
    }
    cout<<s[i];
    }
    cout<<endl;
}
return 0;
}