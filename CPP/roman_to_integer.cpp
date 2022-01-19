#include<iostream>
using namespace std;
int getValue(char s)
{
    if(s=='I')
    {
        return 1;
    }
    else if(s=='V')
    {
        return 5;
    }
    else if(s=='X')
    {
        return 10;
    }
    else if(s=='L')
    {
        return 50;
    }
    else if(s=='C')
    {
        return 100;
    }
    else if(s=='D')
    {
        return 500;
    }
    else if(s=='M')
    {
        return 1000;
    }
    return 0;
}
int main(){
    string roman="MCMIV";
    int sum=0;
    for(int i=roman.size()-1;i>=0;i--)
    {
        if(getValue(roman[i])>getValue(roman[i-1]))
        {
            sum=sum+getValue(roman[i])-getValue(roman[i-1]);
            i--;
        }
        else
        {
            sum=sum+getValue(roman[i]);
        }
        cout<<sum<<endl<<endl;
    }
    return 0;
}