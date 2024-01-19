#include <bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs)
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }

    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main(){
    int nStairs = 5;

    cout<<"Number of ways to reach nStair is : "<<countDistinctWays(nStairs)<<endl;


    return 0;
}