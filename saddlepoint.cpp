#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    bool k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool found = true;
            for (int p = 0; p < n; p++)
            {
                if (arr[i][j] > arr[i][p])
                {
                    found = false;
                }
            }
            for (int x = 0; x < n; x++)
            {
                if (arr[i][j] < arr[x][j])
                {
                    found = false;
                }
            }
            if (found == true)
            {
                cout << " saddle point is" << arr[i][j] << " ";
                k = 1;
                count++;
            }
        }
    }
    if (k == 0)
    {
        cout << "no saddle point" << endl;
    }
    cout << "the number of saddle point are" << count << endl;
}
