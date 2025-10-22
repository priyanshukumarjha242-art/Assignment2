#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    string s;
    string subStr;
    getline(cin, s);
    getline(cin, subStr);
    int p = s.size();
    int q = subStr.size();
    bool found = false;

    for (int i = 0; i <= p - q; i++)
    {
        if (s.substr(i, q) == subStr)
        {
            cout << i << " ";
            cout << " found";
            found = true;
        }
    }
    if (!found)
    {
        cout << "substring not found";
    }
}