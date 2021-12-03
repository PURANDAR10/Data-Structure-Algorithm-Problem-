#include <iostream>
using namespace std;
int lls(string s)
{
    int max = 0;
    int count = 0;
    int l = s.length();
   

    for (int i = 0; i < l; i++)
    {
        
        int idx = s.at(i) - 97;
        if (arr[idx] != 1)
        {
            arr[idx] = 1;
            max += 1;
            // cout<<idx<<"idx";
        }
        else
        {
            i += max;
            arr[idx]=0;
            // cout << max << "hi";
        }
        if (max > count)
        {
            count = max;
        }
    }

    return count;
}

int main()
{
    string s = "pwwkew";
    cout << lls(s);
}