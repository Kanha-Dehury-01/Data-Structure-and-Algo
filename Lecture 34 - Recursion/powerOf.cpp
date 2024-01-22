#include <bits/stdc++.h>
using namespace std;

long long int powerOf(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    if(b&1==1){
        return a*powerOf(a,b/2)*powerOf(a,b/2);
    }
    else{
        return powerOf(a,b/2)*powerOf(a,b/2);
    }
}

int main(){
    int a ,b;
    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;

    cout<<"Answerof a^b is : "<<powerOf(a,b)<<endl;
}