#include<iostream>
bool checkbool(int a)
{
    if(a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
using namespace std;
int main(){
    int a=5;
    bool b=checkbool(a);
    cout<<b<<endl;

}