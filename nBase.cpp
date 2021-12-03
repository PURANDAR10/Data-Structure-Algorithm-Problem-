#include<iostream>
#include<vector>
using namespace std;
string nbase(int num,int divisor)
{
    int qu=num/divisor;
    string res="";
    vector<int> rem;
    rem.push_back(num%divisor);
    while(qu!=0)
    {
       rem.push_back(qu%divisor);
       qu/=divisor;

    }
    for(int i=0;i<rem.size();i++)
    {
        if(rem[i]>9)
        {
            res=(char)(rem[i]-9+64)+res;
        }
        else res=to_string(rem[i])+res;
    }
    return res;
}
int main()
{
    int num=718;
    int divisor=12;
    string ou=nbase(num,divisor);
    cout<<ou<<endl;
}