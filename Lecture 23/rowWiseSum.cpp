#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the size of row and col :"<<endl;
    cin>>row;
    cin>>col;
    int arr[row][col];

    cout<<"Enter the element of 2D array :";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The 2D array is : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"The row sum are as follows : ";

    int summax = INT_MIN;
    for (int i = 0; i < row; i++)
    {   
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
            summax = max(sum,summax);
        }
        cout<< sum << endl;
    }
    cout<<"Maximum sum of coloumn is : "<<summax<<endl;
    return 0;
}