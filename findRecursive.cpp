#include<iostream>
using namespace std;
bool checkSorted(int arr[],int n){
    if(n==0||n==1) return true;
    if(arr[0]>arr[1]) return false;
    bool checkSorted1=checkSorted(arr+1,n-1);
    return checkSorted1;

}
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
int n=8;
bool check=checkSorted(arr,n);
cout<<check<<endl;
}