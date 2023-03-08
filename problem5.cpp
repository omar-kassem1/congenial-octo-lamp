#include<iostream>
using namespace std;
int main(){
int n,mx;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
mx=arr[0];
for(int j=1;j<n;j++){
    if(mx<arr[j]){
        mx=arr[j];
    }
}
cout<<mx;
}
