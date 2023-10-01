#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll hanoi(ll N,ll from,ll to,ll aux){
    {
    ll moves=0;
    if(N>=1){
        
    moves+=hanoi(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<"\n";
    moves++;
    moves+=hanoi(N-1,aux,to,from);
    }
    
    return moves;
    }
}
int main(){
ll t;
cin>>t;
while(t--){
ll disc_count;
cin>>disc_count;
cout<<"Number of moves required= "<<hanoi(disc_count,1,3,2)<<"\n";
}
return 0;
}