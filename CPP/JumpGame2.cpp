#include<iostream>
#include<vector>
using namespace std;
// int recur(vector<int>& arr,int ind,int size,int jumps)
// {
    
// }
int jump(vector<int>& arr)
{
    int n=arr.size();
    int maxFur=0,curr=0;
    int jumps=0;

    for(int i=0;i<n-1;i++)
    {
        curr=max(curr,i+arr[i]);
        cout<<curr<<endl<<endl;
        if(i==maxFur)
        {
            jumps++;
            maxFur=curr;
        }
    }
    return jumps;
}
int main(){
    vector<int> arr={1,1,1,1,4};
    cout<<jump(arr);
    return 0;
}