// gcd(a,b)=gcd(b,a%b) ecludian formula
#include<iostream>
using namespace std;
int  findgcd(int n,int m)
{
    if(n<m)
    {
        return findgcd(m,n);
    }
    if(m==0)
    {
        return n;
    }
    return findgcd(m,n%m);
}
int main()
{
    int n,m;
    n=16;
    m=10;
    // if(n>m)
    // {
    // cout<<findgcd(n,m);
    // }
    // else{
    //     cout<<findgcd(m,n);
    // }
    cout<<findgcd(n,m)<<endl;
}