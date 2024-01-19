#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the number of rows : "<<endl;
    cin>>row;
    cout<<"Enter the number of cols : "<<endl;
    cin>>col;

    //forming 2D array dynamically
    int ** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    //taking input of 2D array
    cout<<"Enter the numbers for input : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //dispalying the 2D array
    cout<<"The 2D array is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deleting the dyanamic memory allocated
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;

    cout<<"Memory released"<<endl;
    


    return 0;
}