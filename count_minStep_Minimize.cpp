#include<iostream>
using namespace std;
#include <climits>
int minStep_help(int n,int *ans){
    //base case
    if(n<=1){
        return 0;
    }
    if( ans[n]!=-1){
        return ans[n];
    }
    
  

    int x=minStep_help(n-1,ans);
    
    int y=INT_MAX;
    int z=INT_MAX;
    if(n%2==0){
    int y=minStep_help(n/2,ans);    
    }
    if(n%3==0){
        z=minStep_help(n/3,ans);
    }
    int output=min(x,min(y,z))+1;
    ans[n]=output;
    return ans[n];
}
int minStep(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
    ans[i]=-1;
    }
    return minStep_help(n,ans);
   


}
int main(){
    int n=10;
    cout<<minStep(n);
}