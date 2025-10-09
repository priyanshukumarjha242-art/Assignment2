#include <iostream>
using namespace std;

void subs(int arr1[], int arr2[], int n)
{
    int arr3[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr3[i] = arr1[i] - arr2[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr3[i] << " * x ^" << n - i << " +";
    }
}
void addn(int arr1[], int arr2[], int n)
{
    int arr3[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr3[i] << " * x ^" << n - i << " +";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr1[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> arr1[i];
    }

    int arr2[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> arr2[i];
    }

    // addn(arr1 , arr2,n);
    subs(arr1, arr2, n);
}