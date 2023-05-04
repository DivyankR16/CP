#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*d==b*c){
        cout<<0<<endl;
    }
    else if(a*d==0 || b*c==0){
        cout<<1<<endl;
    }
    else if(a*d==1 || b*c==1){
        cout<<1<<endl;
    }
    else if((a*d)%(b*c)==0 || (b*c)%(a*d)==0){
        cout<<1<<endl;
    }
    
    else{cout<<2<<endl;}
    }
return 0;
}