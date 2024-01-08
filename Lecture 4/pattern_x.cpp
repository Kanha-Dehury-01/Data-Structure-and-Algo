#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number for forming pattern : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << j << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << " ** ";
        }

        for (int l = n - i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}