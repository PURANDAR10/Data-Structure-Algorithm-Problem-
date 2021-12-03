#include<iostream>
using namespace std;
int main(){
    // char arr[20]="abcdef";
   int arr[]={2,3,5,4,7};
    // int i;
    // for(i=0;i<10;i++){
    //     *(arr+i)=65+i;
    // }

    cout<<arr+2<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    int p=5;
    int &k=p;
    k++;
    // int &k=p;
    cout<<k<<endl;
    cout<<p<<endl;

}