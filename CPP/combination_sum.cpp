#include<iostream>
#include<vector>
using namespace std;

void sum(vector<int>& can,int target,vector<vector<int>>& res,vector<int>& com, int ind)
{
    if(!target)
    {
        res.push_back(com);
        return;
    }
    for(int i=ind;i!=can.size()&& target>=can[i];i++)
    {
        com.push_back(can[i]);
        sum(can,target-can[i],res,com,i);
        com.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& can, int target)     {
    sort(can.begin(),can.end());
    vector<vector<int>> res;
    vector<int> com;
    sum(can,target,res,com,0);
    return res;
}
int main(){
    vector<int> candidates={2,3,6,7}; 
    int target=7;
    int val=0;
    vector<int> ans;
    combinationSum(can,target);
    return 0;
}