#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the size of row and col :" << endl;
    cin >> row;
    cin >> col;
    int arr[row][col];

    cout << "Enter the element of 2D array :"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int rs = 0;
    int re = row-1;
    int cs = 0;
    int ce = col-1;
    cout<<"Spiral Matrix : "<<endl;
    while(rs<row && re<col && rs<re && cs<ce){
        for(int i=cs;i<=ce;i++){
            cout<<arr[rs][i]<<endl;
        }
        rs++;
        for(int i=rs;i<=re;i++){
            cout<<arr[i][ce]<<endl;
        }
        ce--;
        for(int i=ce;i>=cs;i--){
            cout<<arr[re][i]<<endl;
        }
        re--;
        for(int i=re;i>=rs;i--){
            cout<<arr[i][cs]<<endl;
        }
        cs++;
    }

    return 0;
}