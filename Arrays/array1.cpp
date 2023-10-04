// deleting the element from array 
#include <iostream>
using namespace std;
int main(){
int i,n,a[100];
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
for(i=m-1;i<n;i++){
    a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++){
    cout<<a[i];
}
}
