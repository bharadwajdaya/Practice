#include<iostream>
#include<limits.h>
using namespace std;
bool canJump(int A[], int n) {
   int i = 0;
   int reach=0;
   for (i = 0; i < n && i <= reach; ++i)
   {
      reach = max(i + A[i], reach);
      cout<<i<<" "<<reach<<endl;
   }
   return i == n;
}
 
/* Driver code*/
int main()
{
   int arr[]={1,1,0,1,4};
   cout<<canJump(arr,5)<<endl;
   return 0;
}
 