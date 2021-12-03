#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        string str; 
        cin >> str; 
        int n = str.length(), ans = 0; 
        for(int i = 0; i < n; i++){ 
            if(str[i] == '5' || str[i] == '6') 
                continue; 
            else 
                ans += 1; 
        } 
        cout << ans << endl; 
    } 
    return 0; 
}