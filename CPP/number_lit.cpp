#include<iostream>
#include<sstream>
using namespace std;
void printLn(string num)
{
    cout<<num<<endl;
}
string getMeString(int n)
{
    stringstream ss;
    ss<<n;
    string str;
    ss>>str;
    return str;
}
string runCalc(string num)
{
    cout<<"Number "<<num<<endl;
    int i=0;
    num=num+"$";
    int count=1;
    string ans="";
    for(int i=1;i<num.length();i++)
    {
        if(num[i]==num[i-1])
        {
            count++;
        }
        else
        {
            string _count=getMeString(count);
            ans=ans+_count+num[i-1];
            count=1;
        }
    }
    return ans;
}
string countAndSay(int n) {
    string num;
    num="1";
    for(int i=1;i<=n;i++)
    {
        string _i=getMeString(i);
        num=runCalc(num);
        printLn(num);
    }
    return num;
}

int main()
{
    int n=4;
    cout<<countAndSay(n-1);
    return 0;
}