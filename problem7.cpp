#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int num;
    cin>>num;
    long long fact=1;
    for(int i=1;i<num;i++){
        fact*=i;
    }
 cout<<fact<<endl;
 fact=1;
}

}

