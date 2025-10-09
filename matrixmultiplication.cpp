#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int arr1[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    int arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int arr3[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}