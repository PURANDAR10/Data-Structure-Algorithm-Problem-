#include<iostream>
using namespace std;
bool checknum(int arr[],int size,int x)
{
    if(size==0)
    {
    return false;
    }
    else if(arr[0]==x){
        return true;

    }
    return checknum(arr+1,size-1,x);
}
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size=6;
    int x=60;
    cout<<arr.size()<<endl;
    cout<<checknum(arr,size,x)<<endl;
   

}