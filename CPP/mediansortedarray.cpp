#include<iostream>
#include<string>
#include<vector>
using namespace std;
double findMedianSortedArray(vector<int>& a,vector<int>& b)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<a.size() || j<b.size())
    {
        int num1;
        int num2;
        if(i<a.size())
        {
            num1=a.at(i);
        }
        if(j<b.size())
        {
            num2=b.at(j);
        }
        
        if(i==a.size())
        {
            while(true)
            {
                if(j==b.size())
                {
                    break;
                }
                num2=b.at(j);
                ans.push_back(num2);
                j++;
            }
        }

        else if(j==b.size())
        {
            while(true)
            {
                if(i==a.size())
                {
                    break;
                }
                num1=a.at(i);
                ans.push_back(num1);
                i++;
            }
        }
        else if(num1<num2)
        {
            ans.push_back(num1);
            i++;
        }
        else
        {
            ans.push_back(num2);
            j++;
        }
    }
    int _median_s=ans.size();
    
    double median;
    if(_median_s%2==0)
    {
        _median_s=_median_s/2;
        median=(ans.at(_median_s-1)+ans.at(_median_s));
        median=median/2;
    }
    else
    {
        _median_s=_median_s/2;
        median=ans.at(_median_s);
    }
    return median;
}
int main(){
    int arr1[]={1,2};
    int arr2[]={3,4};

    int ssize1=sizeof(arr1)/sizeof(arr1[0]);
    int ssize2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> a;
    a.assign(arr1,arr1+ssize1);
    vector<int> b;
    b.assign(arr2,arr2+ssize2);
    
    cout<<findMedianSortedArray(a,b)<<endl;
    return 0;
}