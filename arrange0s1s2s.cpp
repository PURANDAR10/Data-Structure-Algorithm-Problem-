#include<iostream>
using namespace std;
void arng(int *arr,int l)
{
    int low =0;
    int mid=0;
    int high=l-1;
    while (mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==1)
        {
                mid++;
        }
        else
        {
            swap(arr[mid],arr[high--]);
        }
    }
    
} 
int main()
{
    int arr[]={1,1,0,5,6,9,0,1,1,4};
    int l=sizeof(arr)/sizeof(arr[0]);
    arng(arr,l);
    for(int i:arr)
    {
        cout<<i;
    }
    int val[]{781,2,1,1,5};
    // cout<<"tjr "<<val;
    // count<<val;
    int j{};
    cout<<j;
}
