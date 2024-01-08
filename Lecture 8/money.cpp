#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount to calculate the number of notes : ";
    cin>>amount;

    if(amount>=100){
        int hn = amount/100;
        amount = amount-(100 * hn);
        cout<<hn<<" no of hundred notes"<<endl;
    }
    if(amount>=50){
        int fn = amount / 50;
        amount = amount - (50 * fn);
        cout << fn << " no of fifty notes" << endl;
    }
    if (amount >= 20)
    {
        int tn = amount / 20;
        amount = amount - (20 * tn);
        cout << tn << " no of twenty notes" << endl;
    }
    if (amount >= 10)
    {
        int ten = amount / 10;
        amount = amount - (10 * ten);
        cout << ten << " no of ten notes" << endl;
    }
}