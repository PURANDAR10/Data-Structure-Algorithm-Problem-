#include<iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
 cout<<s[6]<<endl;
   int n=s.length();
   n--;
   int value;
   for(int i=0;s[i]!='\0';i++)
   {
       if(s[i]>=0&&s[i]<=9)
       {
        cout<<"Ander WAla";
           int q=s[i];
           cout<<q<<endl;
       }
   }    
}