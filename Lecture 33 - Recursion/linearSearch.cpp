#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[1] = {1};
    int key = 6;

    cout << "the element is " << (linearSearch(arr, 1, key) ? "found" : "not found") << endl;
}