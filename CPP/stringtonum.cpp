#include<iostream>
#include<string>
#include<vector>
using namespace std;
int toAtoi(string num)
{
    int sum=0;
    int i=0;
    int flag=0;
    while(num[i]=='-' || num[i]=='+' ||num[i]=='0' || num[i]==' ')
    {
        if(num[i]=='-')
        {
            flag=1;
        }
        if(num[i]>='1' && num[i]<='9')
        {
            break;
        }
        i++;
    }
    while(num[i]>='1' && num[i]<='9')
    {
        sum=sum*10+(num[i]-'0');
        i++;
    }
    sum=flag?sum*-1:sum;
    return sum;
}
int main(){
    string num=" -00123";
    int _num=toAtoi(num);
    return 0;
}