#include<iostream>
using namespace std;
int findmin(int *a,int n)
{
    if(n==0)
    {
        return a[0];
    }
    else {

        return  min(a[0],findmin(a+1,n-1));
    }
    
}
int main()
{
    int arr[]={7,4,3,21,43,1,4,4,2};
    int n=9;
    cout<<findmin(arr,n);
}