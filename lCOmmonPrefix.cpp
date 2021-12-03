#include<iostream>
using  namespace std;
#include<vector>
// vector<string> longestCommonPrefix(vector<string>& str)
// {

// }
int main(){
    vector<string> str;
    str.push_back("Hello");
    str.push_back("Sir");
    str.push_back("How");
    cout<<str.max_size()<<endl;
    cout<<str.capacity()<<endl;
    str.push_back("are ");
    str.push_back("You");
    str.insert(2,{"Nice","to","meet","you"});
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
        str[1].lenght();
    }
    str.lenght();
   




}