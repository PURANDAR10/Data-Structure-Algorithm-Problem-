#include<iostream>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int smalloutput1=fib(n-1);
    int smalloutput2=fib(n-2);
    return smalloutput1+smalloutput2;
}
// i==0 ke liye sahi or i==1 ke liye sahi hai to (n-1) or (n-2) ke liye bhi shahi hoga
int main()
{
    int n=10;
    // cin>>n;
    cout<<fib(n);
}