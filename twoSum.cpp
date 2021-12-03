#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,3,5,6,5,7,8,12,20};
    int n=sizeof(arr)/sizeof(arr[1]);
    int target=12;
    int result[2]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]+arr[j]==target){
                // cout<<i<<"  "<<j<<endl;
                result[0]=i;
                result[1]=j;
                break;
            }
          if(result[1]!=0)
          {
              break;
          }
        }
    }
    // return 0;
    for(int i=0;i<2;i++)
    {
        cout<<result[i]<<endl;
    }
}