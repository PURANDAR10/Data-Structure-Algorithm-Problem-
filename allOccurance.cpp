#include<iostream>
using namespace std;
int findoccurence(int arr[],int n,int target)
{   int count=0;
    if(n==0) 
    {return 0;
    }
    else if(arr[0]==target){ 
        return 1;
        }
    else 
    {
       int output=findoccurence(arr+1,n-1,target);
            output+=1;
     return output;
       }
 
return count;
}

int main()
{
    int arr[]={1,3,5,6,7,5,5,7,2,5,5,9};
    int n=12;
    int target=2;
   cout<< findoccurence(arr,n,target);

}