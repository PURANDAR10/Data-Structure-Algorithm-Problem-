#include<bits/stdc++.h>
using namespace std;
void check(string s,int l)
{
    int i=0;
    int j=l-1;
while(j>=i)
{
    if(s.at(i)==s.at(j))
    {

        cout<<i<<j;
        i++;
        j--;
    }
    // else break;
    if(i==j)
    {
        cout<<"palindrone";
    }
    
}
}
int main()
{
    string s="babaabab";
    int l=6;
    check(s,l);
}