#include<bits/stdc++.h>
using namespace std;
vector<int>  sum(int *arr,int k)
{
    // vector<int> ans;
    for(int i=0;i<k;i++)
    {

        int sum=0;
       for(int j=i;i<k;j++) 
        {
            sum+=arr[j];
            if(sum==k) 
        {
            // ans.push_back(i);
            // ans.push_back(j);
            // return {i};
            return {i,j};
        }
            else if(sum>k) 
            {break;}
            else 
            {continue;
            }
        }
    }
   

}
int main()
{
    int arr[]{1,3,2,3,4,5,3,3};
    int k=12;
     vector<int> p= sum(arr,k);
     for(int i:p) cout<<i;
}