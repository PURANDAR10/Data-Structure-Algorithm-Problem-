#include <bits/stdc++.h>
using namespace std;
int main()
{   int value=0;
    double DecimalValue=0;
    char hexaValue[17];
    cin>>hexaValue;
    int length=strlen(hexaValue);
    length--;
    
    for(int i=0;hexaValue[i]!='\0';i++)
    {
        if(hexaValue[i]>='0' && hexaValue[i]<='9')
        {
            value=hexaValue[i]-48;
            cout<<"1rd"<<endl;
            // cout<<value<<endl;
        }
        else if(hexaValue[i]>='a' && hexaValue[i]<='g')
        {
            value=hexaValue[i]-97+10;
            cout<<"2rd"<<endl;
        }
        else if(hexaValue[i]>='A' && hexaValue[i]<='G')
        {
                value=hexaValue[i]-65+10;
                cout<<"3rd"<<endl;
        }
        DecimalValue=DecimalValue+value*pow(17,length);
        length--;

        
    }
    cout<<DecimalValue<<endl;
}