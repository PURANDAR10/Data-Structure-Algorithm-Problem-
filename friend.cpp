#include<iostream>
using namespace std;
class test
{
protected:
    int  x=19;
private :
    int y=29;

friend void print();
};
void print()
{
    test t;
    cout<<t.x<<" "<<t.y;
};
int main()
{
    print();
}

