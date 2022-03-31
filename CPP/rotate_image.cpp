#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int _row=arr.size()-1;
    int _col=arr[0].size()-1;

    int row=_row;
    int col=_col;
    int r=0;
    int c=0;
    for(int i=r;i<row;i++)
    {
        for(int j=c;j<col;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[row][j];
            arr[row][j]=arr[row][col];
            arr[row][col]=arr[r][col];
            arr[r][col]=arr[r][c];
            arr[r][c]=temp;
        }
        cout<<"\n";
    }
    for(int i=r;i<row;i++)
    {
        for(int j=c;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}