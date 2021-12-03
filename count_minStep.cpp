#include<iostream>
using namespace std;
#include <climits>
int minStep(int n){
    //base case
    if(n<=1){
        return 0;

    }
    cout<<"VAlue of N: "<<n<<endl;
    int x=minStep(n-1);
    cout<<"value of X: "<<x<<endl;
    int y=INT_MAX;
    int z=INT_MAX;
    if(n%2==0){
        y= minStep(n/2);
        cout<<"value of Y: "<<y<<endl;
    }
    if(n%3==0){
        z=minStep(n/3);
        cout<<"value of Z: "<<z<<endl;
    }
    cout<<"Min value of x,y: "<<min(x,y)<<endl;
    cout<<"Min value of y,z: "<<min(y,z)<<endl;
    int ans=min(x,min(y,z))+1;
    return ans;
}
int minStep_help()
int main(){
    int n=6;
    cout<<minStep(n)<<endl;
}