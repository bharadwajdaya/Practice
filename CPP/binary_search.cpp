#include<iostream>
using namespace std;
int searchIndex(int arr[],int _find,int start,int count)
{
    if(count>=start)
    {
        int middle=((start)+(count-1))/2;
        if(arr[middle]==_find)
        {
            return middle+1;
        }
        if(arr[middle]<_find)
        {
            return searchIndex(arr,_find,middle+1,count);
        }
        return searchIndex(arr,_find,start,count-1);
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int _find=2;
    int _count=sizeof(arr)/sizeof(arr[0]);
    int ind=searchIndex(arr,_find,0,_count);
    cout<<ind;
    return 0;
}