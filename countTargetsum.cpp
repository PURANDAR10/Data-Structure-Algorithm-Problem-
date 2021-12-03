#include<iostream>
using namespace std;
void path(int n,int m,int g)
{
    int* arr=new int[m+1];
    int count=0;
    for(int i=1;i<=m;i++)
    {
        arr[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=1;k<=m;k++)
            {
                if(arr[i]+arr[j]+arr[k]==g)
                {
                    count+=1;
                }
            }
        }
    }
    cout<<count;
}
int main()
{   
   int  n=30;
    int m=60;
    int k=122;
    path(n,m,k);
}