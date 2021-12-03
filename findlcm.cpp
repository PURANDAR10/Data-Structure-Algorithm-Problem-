#include<iostream>
using namespace std;
int findlcm(int n,int m )
{
    int r=max(n,m);
    for(int i=1;i<=r;i++)
    {
    if((r*i)%m==0)
        {
        return r*i;

        }
    }
    return 0;
}
int main()
{
    int n;
    int m;
    n=30;m=10;
    cout<<findlcm(n,m);
}