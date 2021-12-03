#include<iostream>
using namespace std;
int diff(int n,int m)
{
    int sum=(m*(m+1))/2;
    int sum2=0;
    for(int i=n;i<=m;i++)
    {
        if(i%n==0) sum2+=i;
    }
    // cout<<"sum"<<sum<<"sum2"<<sum2<<endl;
    return abs(sum-(2*sum2));
}
int main()
{
    int n=4;
    int m=20;
    cout<<diff(n,m);
}
