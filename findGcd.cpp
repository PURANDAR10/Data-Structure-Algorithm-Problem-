#include<iostream>
using namespace std;
int FindGcd(int a,int b)
{
    for(int i=1;i<=min(a,b);i++)
    {
        int gcd=1;
        if(a%i==0 && b%i==0)
        {
           
            gcd=i;
        }
        cout<<"gcd"<<gcd;
        
    }
    return 0;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<FindGcd(a,b);
}