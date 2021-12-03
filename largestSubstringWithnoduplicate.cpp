#include<bits/stdc++.h>
using namespace std;
int peak(int *arr,int l)
{
    int mi=INT_MAX;
    int io=0;
    for(int i=1;i<l-1;i++)
    if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
    {
        mi=min(mi,arr[i]);
    }
    
    return mi>=0?mi:0;
}
int main()
{
    // string s="pwwewe";

    int arr[]={12,5,14,4,5,3,3,5,6,4,8};
    int l=sizeof(arr)/sizeof(arr[0]);
   cout<< peak(arr,l);
    // cout<<s;
}