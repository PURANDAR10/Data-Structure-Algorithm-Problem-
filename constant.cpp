#include<iostream>
using namespace std;
int calculate(int x ,int y){
    return x*y;
}
float calculate(float l,float m)
{
    return l/m;
}
int main(){
   int x=4;
   int y=5;
   float l=30.0;
   float m=10.0;
   cout<<calculate(x,y)<<endl;
   cout<<calculate(l,m)<<endl;

    // int * p=&i;
    // (*p)++;
    // int **p2=&p;
    // (*p)++;
    // cout<<*p;
    // cout<<i;
    // int t=0b0000111011111111110;
    // cout<<t<<endl;
//     cout<<"\\\\\\p";
    
//     cout<<t<<endl;
// }
}