#include<iostream>
using namespace std;

int countSingleBit(unsigned int num)
{
    if(num<=0)
    {
        return 0;
    }
    return (num%2==0 ? 0 : 1)+ countSingleBit(num/2);
}
int countBits(unsigned int n)
{
    int bitCount=0;

    for(int i=1;i<=n;i++)
    {
        bitCount+=countSingleBit(i);
    }

    return bitCount;
}

int main(){
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
    return 0;
}