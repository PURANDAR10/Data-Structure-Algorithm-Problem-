   #include<iostream>
   using namespace std;
   
int main(){
    int a[3]={11,25,21};
    int b[3]={111,5,211};
    int arr[]={0,0};
    for(int i=0;i<3;i++)
    {
        a[i]>b[i]?arr[0]+=1:a[i]<b[i]?arr[1]+=1:0;
        
        //     arr[0]+=1;
        // else if()
    }
    return *arr;
    




    // int sum;
    // int ar[]={10,2,3};
    // for (int i=0;i<3;i++)
    // {
    //     int sum;
    //     cout<<sum<<endl;
    //     sum=sum+ar[i];
    //     cout<<sum<<endl;
       
    // }
    // cout<<sum;
 }