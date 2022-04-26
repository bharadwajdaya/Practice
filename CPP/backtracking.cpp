#include<iostream>
#include<vector>
using namespace std;
void backtrack(string str,int ind)
{
    int n=str.length();
    if(ind==n)
    {
        cout<<str<<endl;
    }
    else
    {
        for(int i=ind;i<n;i++)
        {
            swap(str[ind],str[i]);
            backtrack(str,ind+1);
            swap(str[ind],str[i]);
        }
    }
}
void permute(string str)
{
    backtrack(str,0);
}
int main(){
    string str="abc";
    permute(str);
    return 0;
}