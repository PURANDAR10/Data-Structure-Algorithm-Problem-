#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={(1,2,3),(4,5,6)};
    cout<<&arr[1][1]<<endl;
    cout<<&arr[1][2]<<endl;
}