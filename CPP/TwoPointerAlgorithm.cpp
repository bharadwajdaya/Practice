#include<iostream>
#include<vector>
using namespace std;
vector<int> isPair(vector<int>& nums,int target)
{
    int i=0;
    int j=nums.size()-1;
    vector<int> ans;
    while(i<j)
    {
        if(nums[i]+nums[j]==target)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        else if(nums[i]+nums[j]<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums{1,2,3,4,5,6};
    int target=7;
    vector<int> inde=isPair(nums,target);
    cout<<inde[1]<<" "<<inde[0];
    return 0;
}