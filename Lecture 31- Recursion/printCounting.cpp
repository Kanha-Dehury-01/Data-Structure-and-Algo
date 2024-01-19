#include <bits/stdc++.h>
using namespace std;
//head recursion
void printh(int size){
    if(size==0){
        return;
    }
    printh(size-1);
    cout<<size<<endl;
}

//tail recursion
void printt(int size){
    if(size==0){
        return;
    }
    cout<<size<<endl;
    printt(size-1);
}

int main(){
    int size;
    cout<<"Enter upto which want to print the count : "<<endl;
    cin>>size;

    cout<<"Head Recursion"<<endl;
    printh(size);
    cout<<"Tail Recursion"<<endl;
    printt(size);



    return 0;

}