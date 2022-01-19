#include<iostream>
#include<string>
using namespace std;
int expandfrommiddle(string str,int left,int right);
string checkpalindrome(string str)
{
        int start=0;
        int end=0;
        for(int i=0;i<str.length();i++)
        {
            int len1=expandfrommiddle(str,i,i);
            int len2=expandfrommiddle(str,i,i+1);
            int len=len1>len2 ? len1:len2;
            if(len>end-start)
            {
                start=i-((len-1)/2);
                end=i+(len/2);
            }
        }
        return str.substr(start,end+1);
}
int expandfrommiddle(string str,int left,int right)
{
    if(str=="" && left>right)
    {
        return 0;
    }
    while(str[left]==str[right] && left>=0 && right<=str.length())
    {
        left--;
        right++;
    }
    return right-left-1;
}
int main()
{
    string str="racecar";
    cout<<checkpalindrome(str);
    return 0;
}