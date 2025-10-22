#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    vector<string> names;
    int n;
    cout << " enter the number of names" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (names[j] > names[j + 1])
            {
                swap(names[j], names[j + 1]);
            }
        }
    }

    // sort(names.begin(), names.end());

    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " ";
    }
}