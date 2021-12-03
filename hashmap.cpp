#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string ,int>mymap;
    pair<string ,int>  p("pt",18);
    mymap.insert(p);
    cout<< mymap["p"]<<endl;
    mymap["ptji"]=598;
    cout<< mymap["ptji"]<<endl;
}