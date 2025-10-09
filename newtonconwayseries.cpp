#include <iostream>
using namespace std;
int P(int n)
{
    if (n <= 2)
        return 1;

    int k = P(P(n - 1));
    int m = P(n - P(n - 1));
    return k + m;
}
int main()
{
    int n;
    cout << "enter the value for which u want to find newton conway series" << endl;
    cin >> n;
    cout << "the number at series is" << P(n) << endl;
}