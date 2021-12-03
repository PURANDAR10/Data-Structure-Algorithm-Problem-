#include<iostream>
using namespace std;
int pElement(int *a,int n,int bean,int element){

for(int i=0;i<n;i+=bean)
    {
        for(int j=i;j<i+bean;j++)
        {
            if (a[j]==element)
            {
            return true;
            }
            else{
            return false;
            }
            cout<<i<<"  "<<j<<" "<<a[j]<<endl;
            }

        }
        
    }

int main(){
    int a[]={1,2,3,4,2,1,3,2};
    int n=8;
    int bean=3;
    int element=6;
    cout<<pElement(a,n,bean,element)<<endl;
}