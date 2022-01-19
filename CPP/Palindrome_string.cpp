#include<iostream>
#include<sstream>
using namespace std;
bool isPalindrome(int num)
{
    bool _str_check=false;
    ostringstream _s;
    _s<<num;
    string _str=_s.str();
    string _temp=string(_str.rbegin(),_str.rend());
    if(_str==_temp)
    {
        _str_check=true;
    }
    return _str_check;
}
int main(){
    int num;
    cin>>num;
    cout<<isPalindrome(num);
    return 0;
}