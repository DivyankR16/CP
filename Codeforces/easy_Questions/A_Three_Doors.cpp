#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>z={a,b,c};
    int ck=0;
    int indx=z[x-1];
    for (int i = 0; i < 2; i++)
    {if(indx!=0){
        ck++;
        indx=z[indx-1];
    }
    }
    if(ck==2){
        cout<<"Yes"<<endl;
    }
    else{cout<<"No"<<endl;}
    
}
return 0;
}