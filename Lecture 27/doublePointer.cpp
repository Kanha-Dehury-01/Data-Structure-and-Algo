#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;

    cout<<"READY TO CHECK : "<< endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    
    int **q =&p;
    cout<<&p<<endl;
    cout<<q<<endl;

    cout<<**q<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;




     return 0;
}