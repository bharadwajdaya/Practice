#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& nums) 
{
    int n=nums.size();
    int l=0,r=n-1;
    int maxL=0,maxR=0;
    int water=0;
    while(l<=r)
    {
        if(nums[l]<=nums[r])
        {
            if(nums[l]>=maxL)
            {
                maxL=nums[l];
            }
            else
            {
                water+=maxL-nums[l];
            }
            l++;
        }
        else
        {
            if(nums[r]>=maxR)
            {
                maxR=nums[r];
            }
            else
            {
                water+=maxR-nums[r];
            }
            r--;
        }
    }
    return water;
}
int main()
{
    vector<int> nums{0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(nums);
    return 0;
}