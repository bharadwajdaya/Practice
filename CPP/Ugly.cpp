#include<iostream>
using namespace std;

int maxPower(int num,int i)
{
    while(num%i==0)
    {
        num=num/i;
    }
    return num;
}

bool isUgly(int number)
{
    number=maxPower(number,2);
    number=maxPower(number,3);
    number=maxPower(number,5);

    if(number==1) 
    {
        return true;
        } 
        else 
{return false;};
}

int getUglyNumber(int nthNumber)
{
    int i=11;
    int count=0;
    int last=0;
    while(count<nthNumber)
    {
        if(isUgly(i))
        {
            count++;
            last=i;
        }   
        i++;
    }
    return last;
}

int main(){
    int nthNumber;
    cin>>nthNumber;

    int nthUglyNumber=getUglyNumber(nthNumber);
    cout<<nthUglyNumber;

    return 0;
}