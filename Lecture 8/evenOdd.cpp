#include<iostream>
using namespace std;

void isEven(int num){
    if((num%2)==0){
        cout<<"The number is even "<<endl;
    }
    else cout<<"The number is odd "<<endl;
}

int main(){
    int num;
    cout<<"Enter the number to find it is even or not "<<endl;
    cin>>num;

    isEven(num);

}