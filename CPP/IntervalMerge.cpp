#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int curr_max=arr[0];
    int max_so_far=arr[0];
    int size=sizeof(arr)/sizeof(int);
    for(int i=1;i<size;i++)
    {
        curr_max=max(arr[i],arr[i]+curr_max);
        max_so_far=max(max_so_far,curr_max);
    }
    cout<<max_so_far<<endl;
    return 0;
}