#include<bits/stdc++.h>
using namespace std;
int numwithEqSum(int arr[],int diff,int num,int l)

{
    

    int count=0;
    for(int i=0;i<l;i++)
    {

        // cout<<i;
        if(abs(num-arr[i])<=diff)
        {
             count++;
        }
    }
    return count>0?count:-1;
}
int main()
{
    int arr[6]={12 ,3 ,14 ,56 ,77 ,13};
    int diff=2;
    int num=13;
     int l = sizeof(arr)/sizeof(arr[0]);
    cout<<numwithEqSum(arr,diff,num,l);
    //  for(int i:arr) cout<<i;
    // printf("%d",arr);
    // cout<<arr;

}