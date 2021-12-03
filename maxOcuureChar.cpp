#include<iostream>
using namespace std;
int main()
{
    int frequency[256]={0};
    // cout<<frequency[97];
   string s="bbbssdfghjkljhgfdxchsdfghjklkjhgfdsadfghjkkbjhvgcfxdgchbjkttttttttbcacba";
   int maxFreq=0;
for(int i=0;i<s.length();i++)
    {
   int x=s.at(i);
   frequency[x]+=1;
   int maxFreq=max(maxFreq,frequency[i]);
   cout<<maxFreq<<endl;
      cout<<frequency[i]<<endl;

    }
    // cout<<maxFreq<<endl;
// for(int i=1;i<=255;i++)
// {   
//     int maxcount=frequency[0];
//     if(frequency[i]==0)
//     {
//         continue;
//     }
//     // int maxcount=frequency[0];
//     if(frequency[i]>maxcount)
//     {
      
//     int maxCount=frequency[i];
//     }
//  cout<<maxcount<<endl;
// }
    
// int maxCount=frequency[0];
// if(frequency[i]>frequency[0])
//     {
//     maxCount=frequency[i];
    
//     frequency[0]=frequency[i];
//     cout<<maxCount<<endl;
//     }


}
    // for(int i=0;i<s.length;i++)
    //     {
    //         int count=0;
    //         cout<<'a+1'<<endl;
