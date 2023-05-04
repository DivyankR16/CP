#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    cin.ignore();
    string a;
    getline(cin,a);
    cin.ignore();
    string b;
    getline(cin,b);
    string c;
    for (int i = 0; i < a.size()-1; ++i) {
        for (int j = 0; j < a.size()-1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < b.size()-1; ++i) {
        for (int j = 0; j < b.size()-1 - i; ++j) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    int i=0;
    int j=0;
    int l=0;
    int c1=0;
    int c2=0;
    while(a[i]!='\0' && b[j]!='\0'){
        if((a[i]<b[j] && c1<k)||(c2>=k)){
           c[l]=a[i];
           i++;
           c1++;
           c2=0;
        }
        else if((a[i]>b[j] && c2<k)||(c1>=k)){c[l]=b[j];
        j++;
        c2++;
        c1=0;}
        else{exit(0);}
        l++;
}
for (int i = 0; i < l; i++)
{
    cout<<c[i];
}
cout<<endl;
} 

return 0;
}