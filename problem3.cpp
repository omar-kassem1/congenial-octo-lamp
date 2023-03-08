#include<iostream>
using namespace std;
int main(){
int n,i,j,k;
int pve=0,neg=0,even=0,odd=0;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(j=0;j<n;j++){
    if(arr[j]>0){
        pve++;
    }
    else if(arr[j]<0){
        neg++;
    }}
    for(k=0;k<n;k++){
        if(arr[k]%2==0){
            even++;
        }
        else
            odd++;
    }
cout<<"Even:"<<" "<<even<<"\n";
cout<<"Odd:"<<" "<<odd<<"\n";
cout<<"Positive:"<<" "<<pve<<"\n";
cout<<"Negative:"<<" "<<neg<<"\n";


}
