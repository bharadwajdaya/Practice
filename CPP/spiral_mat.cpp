#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generateMatrix(int n) 
{
    vector< vector<int> > arr(n,vector<int>(n));
    int row=n;
    int col=n;
    int r=0;
    int c=0;
    int count=1;
    vector< vector<int> > ans;

    while(r<row && c<col)
    {
        for(int i=c;i<col;i++)
        {
            arr[r][i]=count;
            count++;
        }
        r++;

        for(int i=r;i<row;i++)
        {
            arr[i][col-1]=count;
            count++;
        }
        col--;

        if(r<row)
        {
            for(int i=col-1;i>=c;i--)
            {
                arr[row-1][i]=count;
                count++;
            }
            row--;
        }
        if(c<col)
        {
            for(int i=row-1;i>=r;i--)
            {
                arr[i][c]=count;
                count++;
            }
            c++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<"asas"<<"\n";
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            temp.push_back(arr[i][j]);
            cout<<"\n";
        }
        ans.push_back(temp);
    }

    return ans;
}
int main()
{
    int n=3;
    vector< vector<int> > genMat=generateMatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<genMat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}