#include<iostream>
#include<vector>
using namespace std;
int getValue(char ch)
{
    switch(ch)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
    
}
int romanToInt(string str)
{
    int n=str.length();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int curr=getValue(str[i]);
        if(i+1<n)
        {
            int next=getValue(str[i+1]);
            cout<<curr<<" "<<next<<endl;
            if(next>curr)
            {
                sum=sum+next-curr;
                i++;
            }
            else
            {
                sum=sum+curr;
            }
            cout<<sum<<endl<<endl;
        }
        else
        {
            sum=sum+curr;
        }
    }
    return sum;
}

int main(){
    string str="LVIII";
    cout<<romanToInt(str)<<endl;
    return 0;
}