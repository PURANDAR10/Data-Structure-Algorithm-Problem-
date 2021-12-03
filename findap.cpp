#include<iostream>
using namespace std;
bool checkap(int a,int element,int d)
{
    if((element-a)%d==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<checkap(a,b,c)<<endl;
}