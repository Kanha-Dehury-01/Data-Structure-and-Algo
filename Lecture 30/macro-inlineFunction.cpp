#include <bits/stdc++.h>
using namespace std;

//macro
#define PI 3.14 
#define square(n)(n*n)

//inline function
inline int getMax(int &a,int &b){
    return (a>b)? a : b ;
}

//function with default argument
void print(int *arr,int size,int start=0){

    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //used macro for it
    int radius = 3 ;
    // double area = 3.14 * 3 * 3 ;
    double area = PI * square(radius) ;
    cout<<"The area of circle is : "<<area<<endl; 

    //inline function uses
    int a = 10 ;
    int b =6 ;
    cout<<"The max number is : "<<getMax(a,b)<<endl;

    //default argument
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    print(arr,10);
    print(arr,10,5);

    return 0;
}