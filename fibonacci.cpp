#include<iostream>
using namespace std;
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n-1) + fib(n-2);
// }

int fibo_help(int n,int *ans ){
    if(n<=1){
        return 1;
    }
    if (ans[n]!=-1){
        return ans[n];
    }
    int a=fibo_help(n-1,ans);
    int b=fibo_help(n-2,ans);
    ans[n]=a+b;
    return ans[n];
    delete ans;

}
int fibo_2(int n)
{
    int *ans=new int [n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    cout<<&ans<<endl;
    cout<<&ans[1]<<endl;
    cout<<*ans<<endl;
    return fibo_help(n,ans);
}
 
int main ()
{
    int n = 40;
    cout << fibo_2(n)<<endl;
    int *sam=new int(2);
    cout<<sam[0]<<endl;
    cout<<sam[1]<<endl;
    cout<<sam[2]<<endl;
    cout<<sam[3]<<endl;
    // cout<<fib(n);
    
    // return 0;
}