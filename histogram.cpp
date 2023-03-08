#include<iostream>
using namespace std;
int main(){
char symbol;
cin>>symbol;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n;j++){
    for(int k=0;k<arr[j];k++){
        cout<<symbol;
    }
    cout<<"\n";
}
}
