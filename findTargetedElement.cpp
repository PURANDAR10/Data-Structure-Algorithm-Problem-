#include<iostream>
using namespace std;
int  findTarget(int arr[],int n,int target)

{  
   
    
    if(arr[0]==target)
    {
        // cout<<"4"<<endl;
        return 0;
        
    }
    else if (n==-1){
        return -1;
        
     return -1;}
    else{
        int index=0;
        int ans=0;
         
    
    ans=findTarget(arr+1,n-1,target);
    index=ans+1;  
    cout<<index<<endl;
    return index;
    }
    
}
int main()
{
    int arr[]={2,43,4,2,5,3,23,236,456};
    int n=9;
   int  target=5;
   cout<< findTarget(arr,n,target);
}