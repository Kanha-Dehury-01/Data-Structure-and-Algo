#include <bits/stdc++.h>
using namespace std;

int fibonnacci(int num){
    if(num==0){
        return 0;
    }

    if(num==1){
        return 1;
    }

    return fibonnacci(num-1)+fibonnacci(num-2);
}

int main(){
    int num ;
    cout<<"Enter the number to find its nth fibonnacci number : "<<endl;
    cin>>num;

    cout<<"The nth fibonnacci number is : "<<fibonnacci(num)<<endl;

    return 0;
}