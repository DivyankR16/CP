#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    if(k%2==1){
        cout<<"Yes"<<endl;
        for(int i=1;i<n;i+=2){
            cout<<i<<" "<<i+1<<endl;
        }
    }
    else{
        if(k%4==0){
         cout<<"No"<<endl;
        }
        else{cout<<"Yes"<<endl;
            for (int i = 1; i < n; i+=2)
            {if((i+1)%4==0){
                cout<<i<<" "<<i+1<<endl;
            }
            else{
                cout<<i+1<<" "<<i<<endl;
            }
            }
            
        }
    }
}
return 0;
}