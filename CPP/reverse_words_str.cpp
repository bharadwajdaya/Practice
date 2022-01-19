#include<iostream>
#include<string>
#include <sstream>
#include<vector>
using namespace std;
string reverseWords(string sample)
{
    char _temp[200];
    int i=0;
    int _i=0;
    vector<string> words;
    string _toret="";
    while(sample[i]!='\0')
    {
        if(sample[i]!='.' && i != sample.size()-1)
        {
            
            _temp[_i]=sample[i];
            _i++;
        }
        else if(sample[i]=='.' || i == sample.size()-1)
        {

            if(i == sample.size()-1)
            {
                _temp[_i]=sample[i];
                _i++;
            }
            _temp[_i]='\0';
            _i=0;
            words.push_back(_temp);
            memset(_temp,'\0',200);
        }   
        i++;
    }
    int _size=words.size();
    while(_size)
    {
        _toret+=words.back();
        words.pop_back();
        _size=_size-1;
        if(_size>0)
        {
            _toret+=".";
        }
    }

    return _toret+"\n";
}
 
int main()
{
    string sample="I.like.this.cake";
    cout<<reverseWords(sample);
    return 0;
}