#include<iostream>
#include<sstream>
using namespace std;
int divisiblityTest(string sample)
{
    int i=0;
    int _rem=0;
    int sum=0;
    for(auto _sin: sample)
    {
        int _n=_sin-'0';
        _rem=_n%7;
        sum=sum*10+_rem;
        i++;
    }
    return sum%7==0?1:0;
}
int main(){
    string sample="7798";
    cout<<divisiblityTest(sample);
    return 0;
}