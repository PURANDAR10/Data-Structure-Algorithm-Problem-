#include<iostream>
using namespace std;
int main()
{
    String s="daabaabcd";
    int l=s.lenght();
    int arr[]=new int[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=-1;
    }
    for(int i=0;i<=l;i++)
    {
        if(arr[i]==-1)
        {   
            arr[i]=s.At(i)-97;
        }
       
    }
    

}