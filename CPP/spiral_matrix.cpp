#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector< vector<int> >& matrix)
{
    vector<int> res;
    int row=matrix.size();
    int column=matrix[0].size();
    int r=0;
    int c=0;

    while(r<row && c<column)
    {
        for(int i=c;i<column;i++)
        {
            res.push_back(matrix[r][i]);
        }
        r++;
        for(int i=r;i<row;i++)
        {
            res.push_back(matrix[i][column-1]);
        }
        column--;

        if(r<row)
        {
            for(int i=column-1;i>=c;i--)
            {
                res.push_back(matrix[row-1][i]);
            }
            row--;
        }

        if(c<column)
        {
            for(int i=row-1;i>=r;i--)
            {
                res.push_back(matrix[i][c]);
            }
            c++;
        }
    }

    return res;
}
int main()
{
    vector< vector<int> > vect
    {
        {1, 2, 3,10},
        {4, 5, 6,11},
        {7, 8, 9,12}
    };
    vector<int> matrix=spiralOrder(vect);
    return 0;
}