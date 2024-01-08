#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int m =n;
  int mask = 0;
  while(n!=0){

    mask =( mask<<1)|1;
    n = n>>1;
  }

  cout << ((~m) & mask );
  cout << ((~m));
}