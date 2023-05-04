#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int f=a*d;
    long long int s=b*c;
    if(f==s){
        cout<<0<<endl;
    }
    else if(s!=0 && f%s==0 || f!=0 && s%f==0){
        cout<<1<<endl;
    }
    else{cout<<2<<endl;}
}

return 0;
}