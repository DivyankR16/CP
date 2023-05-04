#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string a;
    string b;
    cin>>a;
    cin>>b;
    for (int i = 0; i < n; i++)
    {if(a.length()>b.length()){
        if(a[0]>b[0]){
        if(a[0]<a[0+1]){a[0+1]=a[0];}
        else if(a[0]>a[0+1]){a[0+1]=a[0+1];}
        else{a[0+1]=a[0];}
        a.erase(0,1);}
        else if(a[0]<b[0]){
        if(a[0]<a[0+1]){a[0+1]=a[0+1];}
        else if(a[0]>a[0+1]){a[0+1]=a[0];}
        else{a[0+1]=a[0];}
            a.erase(0,1);
        }
        else{
            a[0+1]=a[0];
            a.erase(0,1);
        }
        }
        else if(a.length()==b.length()){
          if(a.compare(b)==0){
            cout<<"Yes"<<endl;
            break;
          }
          else{cout<<"No"<<endl;
          break;}
        }
    }
}
return 0;
}