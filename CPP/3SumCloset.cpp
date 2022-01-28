#include<iostream>
#include<vector>
using namespace std;
int threeSum(vector<int>& _num,int target)
{
    int diff=numeric_limits<int>::max();
    int n=_num.size();
    int ans=0;
    sort(_num.begin(),_num.end());

    for(int i=0;i<_num.size();i++)
    {
        cout<<_num[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<_num.size()-2;i++)
    {
        if(i==0 || (i>0 &&_num[i]!=_num[i-1]))
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int sum=_num[low]+_num[high]+_num[i];
                cout<<sum<<" "<<_num[low]<<_num[high]<<_num[i];
                if(sum>target)
                {
                    high--;
                }
                else if(sum<target)
                {
                    low++;
                }
                else
                {
                    return sum;
                }
                if(abs(sum-target)<diff)
                {
                    diff=abs(sum-target);
                    ans=sum;
                }
            }
        }
    }
    return ans;  
}
int main(){
    int arr[]={0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> _num;
    _num.assign(arr,arr+n);
    cout<<threeSum(_num,3);
    return 0;
}