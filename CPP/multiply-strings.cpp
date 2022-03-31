#include<iostream>
using namespace std;
int main(){
    string num1;
    string num2;
    cin>>num1;
    cin>>num2;
    int _num1=0;
    int _num2=0;
    for(int i=0;i<num2.length();i++)
    {
        int _single=num2[i]-'0';
        _num2=_num2*10+_single;
    }
    for(int i=0;i<num1.length();i++)
    {
        int _single=num1[i]-'0';
        _num1=_num1*10+_single;
    }
    int ans=_num1*_num2;
    cout<<ans;
    return 0;
}