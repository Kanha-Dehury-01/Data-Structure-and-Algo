#include <bits/stdc++.h>
using namespace std;

void callOutNumber(string s[],int num){
    if(num==0){
        return;
    }

    callOutNumber(s,num/10);
    
    cout << s[num % 10] << endl;
}

int main(){
    int num;
    cout<<"Enter the number to call out : "<<endl;
    cin>>num;

    string s[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    

    callOutNumber(s,num);
}