#include <iostream>
using namespace std;
bool stringPattern(string s, string p)
{
    int n = s.length();
    int m = p.length();
    for (int i = 0; i <= (n - m); i++)
    {
        bool isFound = true;
        for (int j = 0; j < m; j++)
        {

            if (s[i + j] != p[j])
            {
                isFound = false;
                break;
            }
        }
        if (isFound == true)
        {
            cout << "The pattern is at " << i << "to" << i + m - 1 << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    string s;
    string p;
    cin >> s;
    cin >> p;

    cout << stringPattern(s, p) << endl;
    return 0;
}