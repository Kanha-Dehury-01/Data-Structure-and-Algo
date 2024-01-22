#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {1, 3, 5, 6, 8, 9};
    int key = 9;
    cout << "the element is " << (binarySearch(arr, 0, 5, key) ? "found" : "not found") << endl;

    return 0;
}