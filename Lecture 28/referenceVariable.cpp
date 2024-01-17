#include <bits/stdc++.h>
using namespace std;

int main(){
    //reference variable
    int i =5;
    int &j =i;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<endl;
    j++; //i get updated 
    cout<<&i<<endl;//no extra memeory is allocated
    cout<<&j<<endl;//we get same address in both the case

    //declaration of array
    int n ;
    cin>>n;
    int arr[n]; // it is a bad practice because if size of n will be bigger then program will crash
    //as it is allocated under stack memory which is fixed before execution or compiling

    //allocating using dyanmic allocation in heap memory
    int * arr1 = new int[n];
    int *num = new int;

    //for deallocating 
    delete []arr1;//for array type
    delete num;//for single data


    return 0;
}