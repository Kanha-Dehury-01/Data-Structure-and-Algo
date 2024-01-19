#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number to find its factorial : "<<endl;
    cin>>n;

    cout<<"The factorial of the number "<<n<<" is : "<<factorial(n)<<endl;

    return 0;
}