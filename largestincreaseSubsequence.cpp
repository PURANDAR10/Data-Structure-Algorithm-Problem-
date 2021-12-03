#include<iostream>
using namespace std;
int lis(int input[],int n)
{
    int *output=new int[n];
    output[0]=1;
    for(int i=1;i<n;i++)//i==1
    {
        output[i]=1;
        for(int j=i-1;j>=0;j--)///0
        {
            if(input[j]>input[i])
            {
                continue;
            }
        int possibleAns=output[j]+1;
        if(possibleAns>output[i])
        {
            output[i]=possibleAns;
        }
        }
    }
    int best=0;
    for(int i=0;i<n;i++)
    {
    if(best<output[i])
    {
        best=output[i];
    }
    }
    delete [] output;
    return best;
}
int main()
{
    int arr[]={1,13,19,21,6,4,8,4,11,16};
    int n=10;
cout<<lis(arr,n);
}