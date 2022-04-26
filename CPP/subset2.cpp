#include<iostream>
#include<vector>
using namespace std;
void recurse(vector<int>& nums,vector< vector<int>>& ans,vector<int>& temp,int ind)
{
    ans.push_back(temp);
    for(int i=ind;i!=nums.size();i++)
    {
        if(i>ind &&nums[i]==nums[i-1]) {
            continue;
        }
        temp.push_back(nums[i]);
        recurse(nums,ans,temp,i+1);
        temp.pop_back();
        
    }
}
vector< vector<int>> subsetsWithDup(vector<int>& nums)
{
    vector< vector<int>> ans;
    vector<int> temp;
    recurse(nums,ans,temp,0);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return ans;
}
int main()
{
    vector<int> nums={4,4,4,1,4};
    //vector<int> nums={1,2,3};
    sort(nums.begin(), nums.end());
    subsetsWithDup(nums);
    return 0;   
}