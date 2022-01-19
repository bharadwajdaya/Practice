#include<iostream>
using namespace std;
bool isAlphabet(char _ch)
{
    if((_ch<='z' && _ch>='a') || (_ch<='Z' && _ch>='A'))
    {
        return true;
    }
    return false;
}
void reversewithoutsymbols(string sample)
{
    string _temp=sample;
    int _end=_temp.size()-1;
    for(int i=0;i<_temp.size();)
    {
        if(!isAlphabet(sample[i]))
        {
            cout<<"in"<<sample[i]<<endl;
            i++;
        }
        else if(!isAlphabet(sample[_end]))
        {
            _end--;
        }
        else
        {
            _temp[i]=sample[_end];
            i++;
            _end--;
        }
    }
    cout<<_temp;
}
int main(){
    string sample="a!!!b.c.d,e'f,ghi";
    reversewithoutsymbols(sample);
    return 0;
}