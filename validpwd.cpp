#include<iostream>
using namespace std;
int check(string s,int l)
{
    int num=0,cap=0;
    if(l<4) return 0;
    if(s.at(0)>='0'&& s.at(0)<='9') return 0;
    for(int i=0;i<l;i++)
    {
        (s.at(i)==' '|| s.at(i)=='/'))?0:1;
        if(s.at(i)>='0'&& s.at(i)<='9') num++;
        if(s.at(i)>='A' && s.at(i)<='Z') cap++;
    }
    if(cap>0 & num>0) return 1;
    
    else return 0;
}
int main()
{
string s="aA1_67";
int l=s.length();
// cout<<l;
cout<<check(s,l);

}