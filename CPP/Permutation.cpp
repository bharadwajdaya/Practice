#include<iostream>
#include<string>
#include<vector>
using namespace std;

void swap(int *a,int *b)
{
    int swap=*a;
    *a=*b;
    *b=swap;
}
void permuteNums(vector<int>& nums,int l,int r,vector< vector<int> >& ans)
{
    if(l==r)
    {
        ans.push_back(nums);
    }
    else
    {
        for(int i=l;i<r;i++)
        {
            swap(&nums[l],&nums[i]);
            permuteNums(nums,l+1,r,ans);
            swap(&nums[l],&nums[i]);
        }
    }
}   

vector< vector<int> > permute(vector<int>& nums)
{
    vector< vector<int> > ans;
    permuteNums(nums,0,nums.size(),ans);
    return ans;
}

int main()
{
    int arr[]={1,2,3};
    vector<int> nums;
    nums.assign(arr,arr+(sizeof(arr)/sizeof(arr[0])));
    permute(nums);
    return 0;
}
