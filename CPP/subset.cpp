#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > subsets(vector<int>& nums)
{
    int size=nums.size();
    int k=(1<<size);

    vector< vector<int> > ans;

    for(int i=0;i<k;i++)
    {
        vector<int> temp;
        for(int j=0;j<size;j++)
        {
            if((i & (1<<j))!=0)
            {
                temp.push_back(nums.at(j));
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    subsets(nums);
    return 0;
}