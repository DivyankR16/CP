#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    char s[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        s[i]='B';
    }
    for (int i = 0; i < n; i++)
    {int x=arr[i]-1;
     int y=m-arr[i];
        if(x<=(m/2-1)){
            if(s[x]=='B'){
                s[x]='A';
            }
            else{s[y]='A';}
        }
        else{
            if(s[y]=='B'){
                s[y]='A';
            }
            else{
                s[x]='A';
            }
        }    
    }
for (int i = 0; i < m; i++)
{
    cout<<s[i];
}
cout<<endl;
    
    
}
return 0;
}