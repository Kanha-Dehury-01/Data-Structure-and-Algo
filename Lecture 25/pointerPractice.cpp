#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    double ch = 14.2232;
    void *ptr;
    ptr = &ch;

    cout<<"*p : "<<*p<<endl;
    cout<<"&i : "<<&i<<endl;
    cout<<"p : "<<p<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"address : "<<sizeof(ptr)<<endl;
    (*p)++ ;
    cout<<"*p++ i : "<<i<<endl;
    cout << " *p+1 : " << (*p) + 1 << endl;

    return 0;
}