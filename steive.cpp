#include<bits/stdc++.h>
using namespace std;
void makeseive(int n)
    {
        bool* seive=new bool[n];
        // int* arr=new int[10];
        for(int i=0;i<=n;i++)
        {
            seive[i]=true;
        } 
        seive[0]=false;
        seive[1]=false;
        for(int i=2;i*1<n;i++)
        {
            for(int j=i*2;j<=n;j+=i)
            {
                seive[j]=false;
            }
        }
        int count;
        for(int i=2;i<=n;i++)
        {
            if(seive[i]==true)
            {
                cout<<i<<", ";
                count++;
            }
        }
        cout<<"count is "<<count;
    }
int main()
{
    // cin>>n;
    int n=10;
    makeseive(n);
}