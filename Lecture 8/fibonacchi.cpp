#include<bits/stdc++.h>
using namespace std;

int fibonachi(int term){
    int a = 0;
    int b = 1;

    if(term==1){
        return 0;
    }
    else if(term==2){
        return 1;
    }

    for(int i = 2;i<term;i++){
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main(){
    int term;
    cout<<"Enter the which fibonacchi number you want : ";
    cin>>term;
    cout<<endl;

    cout<<"The number is : " <<fibonachi(term)<<endl;
}