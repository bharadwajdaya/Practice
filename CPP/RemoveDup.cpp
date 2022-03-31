#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
    int j=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[j++]=nums[i];
        }
        
    }
    cout<<endl;
    for(int n:nums)
    {
        cout<<n;
    }
    cout<<endl;
    return j;
}
int main(){
    vector<int> nums{1};
    cout<<removeDuplicates(nums);
    return 0;
}