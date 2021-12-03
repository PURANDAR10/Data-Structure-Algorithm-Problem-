#include<bits/stdc++.h>
using namespace std;
// #include<vector>
// #include<unordered_map>
vector<int> removeDuplicate(int* arr,int l)
{
unordered_map<int ,bool> seen;
vector<int> output;
for(int i=0;i<l;i++)
{
    if(seen.count(arr[i])>0)
    {
        continue;
    }
    seen[arr[i]]=true;
    output.push_back(arr[i]);
}
return output;
}
int main()
{
    int arr[]={1,3,4,5,1,2,23,4,2,3,34,4,3,3};
    int l=sizeof(arr)/sizeof(arr[0]);
    vector<int> p=removeDuplicate(arr,l);
    for(int i:p)
    {
        cout<<i<<" ";
    }

}