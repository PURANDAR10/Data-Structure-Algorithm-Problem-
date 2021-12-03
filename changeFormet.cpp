#include<iostream>
using namespace std;
int main()
{
    string s="09:45:PM";
    int last2nd=s.size()-2;
    string cmpElement="PM";
    if(s[last2nd]==cmpElement[0])
    {
        s[0]="20";
    }

cout<<s[0]<<endl;
}