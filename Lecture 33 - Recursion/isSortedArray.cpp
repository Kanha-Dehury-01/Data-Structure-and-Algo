#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}

int main()
{
    int arr[10] = {1, 3, 5, 8, 9, 12, 15, 17, 18, 19};
    int arr1[10] = {1, 3, 5, 8, 9, 12, 10, 17, 18, 19};
    cout << "the array is " << (isSorted(arr, 10) ? "sorted" : "not sorted") << endl;
    cout << "the array is " << (isSorted(arr1, 10) ? "sorted" : "not sorted") << endl;
}