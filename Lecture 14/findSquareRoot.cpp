#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int num){
    int start = 1;
    int end = num;

    int mid = start+ (end-start)/2;
    while(start<end){
         if(mid*mid > num){
            end = mid;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    return start;
}

int main(){
    int num;
    cout << "Enter the num to find its square root" << endl;
    cin >> num;

    cout<<"The square root of the number is : "<<findSquareRoot(num)<<endl;
}