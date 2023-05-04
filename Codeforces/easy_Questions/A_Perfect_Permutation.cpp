#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
     for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    if(n%2==0){
     for (int i = 0; i < n; i+=2)
     {
        swap(&arr[i],&arr[i+1]);
     }
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     }
     else{
        for (int i = 1; i < n; i+=2)
        {
            swap(&arr[i],&arr[i+1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<endl;
     }
    
}
return 0;
}