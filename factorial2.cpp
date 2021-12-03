#include<iostream>
using namespace std;
int power(int base,int p){
    cout<<base<<endl;
    cout<<p<<endl;
    if(base==0 ){
        return 0;
    }
    if (p==0){
        return 1;
    }
    int smallpow=power(base,p-1);
    //cout<<n*p<<endl;
    return smallpow*base;
}
int main(){
    int m;
    int n;
    cin>>n>>m;
    power(2,3);
    cout<<2^3<<endl;
}