#include<iostream>
using namespace std;
#include <array>

   int majorityElement(int a[], int size)
{
    if(size==1){
        return a[0];
    }
    else{
    int i=0;
    int j=0;
    for ( i = 0;i<(size-2);i++ )
    {
        int count = 1;
        for ( j = i+1;j<(size-1);j++)
        {
            if ( a[i] == a[j] )
                count = count + 1;
        }
       if ( count > size/2 )
            return a[i];
    }
    return -1;
}
};




int main(){
    
   int  arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<majorityElement(arr,size);
}