#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the size of row and col :" << endl;
    cin >> row;
    cin >> col;
    int arr[row][col];

    cout << "Enter the element of 2D array :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i= 0;i<col;){
        if(i&1 == 1){
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<endl;
            }
        }
        else{
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<endl;
            }

        }
        i++;
    }

    return 0;
}