#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool abc = false;
void change(){
    abc = !abc;
}
int main(){
    cout << abc << "\n";
    change();
    cout << abc << "\n";
    return 0;
}