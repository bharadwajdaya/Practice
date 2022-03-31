#include<iostream>
#include<vector>
using namespace std;
void combination(int n,int k,int ind,vector<vector<int>>& ans,vector<int>& temp)
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    else
    {
        for(int i=ind;i!=n+1;i++)
        {
            temp.push_back(i);
            combination(n,k,i+1,ans,temp);
            temp.pop_back();
        }
    }
}
int main()
{
    int n=4;
    int k=2;

    vector<vector<int>> ans;
    vector<int> temp;
    combination(n,k,1,ans,temp);
    return 0;
}