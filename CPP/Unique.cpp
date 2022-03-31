#include<iostream>
#include<vector>
using namespace std;
int uniquePaths(int m, int n) {
    vector< vector<int>> ans(m,vector<int>(n,1));
    int i=0;
    int j=0;
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            ans[i][j]=ans[i-1][j]+ans[i][j-1];
        }
    }
    return ans[i-1][j-1];
}
int main(){
    cout<<uniquePaths(1,2);
    return 0;
}