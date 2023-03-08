#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<1<<"\n";
for(int d=2;d<=(n/2);d++){
    if((n%d == 0)){
        cout<<d<<"\n";
    }
}
cout<<n;
}
