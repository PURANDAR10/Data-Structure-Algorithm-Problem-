#include<iostream>
using namespace std;
int main(){
int n=13;
int firsthalf=(n+1)/2;//7
int secondhalf=(firsthalf-1);//6
int curRow=1;
while(curRow<=firsthalf)
{
    int curSpace=1;
    while(curSpace<=firsthalf-curRow)
    {
        cout<<" ";

        curSpace+=1;
    }
    int curCol=1;
    while (curCol<(2*curRow)-1)
    {
        cout<<curCol;
        curCol+=1;
        
    }
    cout<<endl;
    curRow+=1;
    
}

    return 0;
}