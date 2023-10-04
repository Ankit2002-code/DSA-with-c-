#include <iostream>
using namespace std;
int main(){
int i,n,a[100];
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
int k;
cin>>k;
for(i=k-1;i<n;i++){
    a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++){
    cout<<a[i];
}
}