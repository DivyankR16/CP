#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,H,M;
    cin>>n>>H>>M;
    map<int,int>pr;
    for (int i = 0; i < n; i++)
    {   int h,m;
        cin>>h>>m;
        pr[60*h+m]++;
    }
    int val=0;
    while(!pr[(60*H+M+val)%(60*24)]){
        val++;
    }
    cout<<val/60<<" "<<val%60<<endl;

}
return 0;
}