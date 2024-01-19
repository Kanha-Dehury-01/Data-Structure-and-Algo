#include <bits/stdc++.h>
using namespace std;

int result(int p){
    if(p==0){
        return 1;
    }

    return 2*result(p-1);
}

int main(){
    int power;
    cout<<"Enter the power of two : "<<endl;
    cin>>power;

    cout<<"The answer is : "<<result(power)<<endl;

    return 0;
}