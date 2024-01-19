#include <bits/stdc++.h>
using namespace std;

void reachHome(int src,int des){
    if(src==des){
        cout << src << " " << des << " Reached Home" << endl;
        return;
    }
    cout<<src<<" "<<des<<endl;
    reachHome(src+1,des);
}

int main(){
    int src = 1;
    int des =10;

    reachHome(src,des);
    return 0;
}