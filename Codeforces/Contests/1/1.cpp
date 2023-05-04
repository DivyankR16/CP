#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
unsigned x;
cin>>x;
unsigned y;
for (unsigned i = 0; i <=pow(2,30); i++)
{
    if((x&i)>0 && (x^i)>0){
        y=i;
        break;
    }
}
cout<<y<<endl;

}
return 0;
}