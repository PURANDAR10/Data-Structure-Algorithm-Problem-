#include<iostream>
using namespace std;
int pow(int n,int m,in)
{
    int ans;
    if(m%2==0)
    {
        int v1=pow(n,m/2);
        ans=v1*v1;
    }
    
    if(m==1)
    {
        return n;
    }
    if(m%2!=0)
    {
        int v2=pow(n,m/2);
        ans=n*v2*v2;
    }
    return ans;
}
int main()
{
    int n=5;
    int m=4;
    cout<<pow(n,m);
}