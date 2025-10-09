#include <iostream>
#include <vector>
using namespace std;
void primefactor(int n)
{
    vector<int> temp;
    for (int i = 2; i <= n; i++)
    {
        bool p = 1;
        for (int k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        {
            temp.push_back(i);
        }
    }
    int m = temp.size();
    for (int i = 0; i < m; i++)
    {

        int count = 0;
        while (n % temp[i] == 0)

        {
            count++;
            n = n / temp[i];
        }

        cout << temp[i] << " ^ " << count << "*" << " ";
    }
}

int main()
{
    int n;
    cout << "enter ur number " << endl;
    cin >> n;
    // vector <int> temp;

    primefactor(n);
}
