#include<iostream>
#include<string>
#include<vector>
using namespace std;
int expandFromMiddle(string str,int left,int right)
{
    int L=left;
    int R=right;
    while(L>=0 && R<str.length() && str[L]==str[R])
    {
        L--;
        R++;
    }
    return R-L-1;
}
string getMaxSubString(string str)
{
    int end=0;
    int start=0;
    if(str.length()<=1 || str.empty())
    {
        return "";
    }
    for(int i=0;i<str.length();i++)
    {
        int len1=expandFromMiddle(str,i,i);
        int len2=expandFromMiddle(str,i+1,i);
        int len=max(len1,len2);
        if(len> end-start)
        {
            start=i-(len-1)/2;
            end=i+(len/2);
        }
    }
    return str.substr(start,end-1);
}
int main()
{
    string str="ysabfbax";
    string str1="";
    cout<<getMaxSubString(str)<<endl;
    return 0;
}