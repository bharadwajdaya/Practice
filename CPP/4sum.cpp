#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > fourSum(vector<int>& nums,int target)
{
    vector< vector<int> > res;
    
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n-3;i++)
    {
        if(i && nums[i]==nums[i-1])
        {
            continue;
        }
        for(int j=i+1;j<n-2;j++)
        {
            if(j!=i+1 && nums[j]==nums[j-1])
            {
                continue;
            }
            int total=target-nums[i]-nums[j];
            int right=nums.size()-1;
            int left=j+1;

            while(left<right)
            {
                if(nums[left]+nums[right]==total)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);

                    res.push_back(temp);

                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                    {
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1])
                    {
                        right--;
                    }
                }
                else
                {
                    if(nums[left]+nums[right]>total)
                    {
                        right--;              
                    }
                    else{
                        left++;
                    }
                }
            }
        }
    }
    return res;
}
int main(){
    //int arr[]={1,0,-1,0,-2,2};
    int arr[]={2,2,2,2,2,2,2};
    int n=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+n);
    int target=8;
    vector< vector<int> > res=fourSum(nums,target);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}