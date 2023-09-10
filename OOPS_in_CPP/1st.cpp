#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
void setData(int a,int b,int c);
void getData(){
    cout<<"Value of a: "<<a<<"\n";
    cout<<"Value of b: "<<b<<"\n";
    cout<<"Value of c: "<<c<<"\n";
    cout<<"Value of d: "<<d<<"\n";
    cout<<"Value of e: "<<e<<"\n";
}   
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee DK;
    DK.d=10;
    DK.e=20;
    DK.setData(1,2,3);
    DK.getData();
    return 0;
}