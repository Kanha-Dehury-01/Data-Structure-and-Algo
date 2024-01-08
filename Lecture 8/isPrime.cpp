#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){


    for(int i=2;(i*i)<=num;i++){
        if((num % i)==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number to check whether it is prime or not";
    cin>>num;
    cout<<endl;

    if (isPrime(num)){
        cout<<"Entered number is prime"<<endl;
    }
    else{
        cout<<"Entered number is not prime"<<endl;
    }
}