#include<iostream>
using namespace std;
int main(){
int counter;
cin>>counter;
for(int i=1;i<=counter;i++){
    string n;
    cin>>n;
    int s=n.size();
    for(int z=s-1;z>=0;z--){
        cout<<n[z]<<" ";
    }
    cout<<endl;
}
}
