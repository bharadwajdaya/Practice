#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > threeSum(vector<int>& _num)
{
    vector< vector<int> > ans;
    int n=_num.size();
    sort(_num.begin(),_num.end());

    for(int i=0;i<_num.size()-2;i++)
    {
        if(n<2)
        {
            vector<int> _temp;
            _temp.assign(_num.begin(),_num.end());
            ans.push_back(_temp);
            return ans;
        }
        if(i==0 || (i>0 &&_num[i]!=_num[i-1]))
        {
            int low=i+1;
            int high=n-1;
            int sum=0-_num[i];

            while(low<high)
            {
                if(sum==_num[low]+_num[high])
                {
                    cout<<_num[i]<<_num[low]<<_num[high]<<endl;
                    vector<int> _temp;
                    _temp.push_back(_num[i]);
                    _temp.push_back(_num[low]);
                    _temp.push_back(_num[high]);

                    ans.push_back(_temp);

                    while(low<high && _num[low]==_num[low+1])
                    {
                        low++;
                    }
                    while(low<high && _num[high]==_num[high-1])
                    {
                        high--;
                    }
                    low++;
                    high--;
                }
                else if(_num[low]+_num[high]>sum)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
    }
    return ans;  
}
int main(){
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> _num;
    _num.assign(arr,arr+n);
    threeSum(_num);
    return 0;
}