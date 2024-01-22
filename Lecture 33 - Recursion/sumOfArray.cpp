#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int *arr, int size,int sum)
{
    if(size==0){
        return sum;
    }
    sum+=arr[0];
    return sumOfArray(arr+1,size-1,sum);
}

int main()
{
    int arr[10] = {1, 3, 5, 8, 9, 12, 15, 17, 18, 19};
    int arr1[10] = {1, 3, 5, 8, 9, 12, 10, 17, 18, 19};
    int arr2[0] = {};
    int sum =0;
    cout << "the array sum is " << sumOfArray(arr,10,sum) << endl;
    cout << "the array sum is " << sumOfArray(arr1, 10,sum)<< endl;
    cout << "the array sum is " << sumOfArray(arr2, 0,sum)<< endl;
}