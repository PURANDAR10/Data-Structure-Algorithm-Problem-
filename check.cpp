#include<bits/stdc++.h>
using namespace std;
void check()
{
    int static s;
    cout<<s<<endl;
    s++;
    cout<<s<<endl;
}
int main(){
    // check();
    int arr[]={1,2,3,433};
    // int j=arr[1++];
       int b[4]={5,1,32,124};
       int p=b[1]+2;
       cout<<b[p++]<<endl<<b[3]<<endl;
       cout<<p<<endl;

   int k,l,m;

   k=++b[1];
cout<<k<<endl;
   l=b[1]++;
cout<<l<<endl;
   m=b[k++];
   cout<<m<<endl;
    cout<<k<<endl<<l<<endl<<m<<endl;

}

