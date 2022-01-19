#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool checkIsomor(string str1,string str2)
{
    if(str1.size()!=str2.size())
    {
        return false;
    }
    unordered_map<char,int> first_str_map;
    unordered_map<char,int> second_str_map;

    for(int i=0;i<str1.size();i++)
    {
        if(first_str_map.count(str1[i])==0)
        {
            first_str_map[str1[i]]=i;
        }
        if(second_str_map.count(str2[i])==0)
        {
            second_str_map[str2[i]]=i;
        }
        int _first=first_str_map[str1[i]];
        int _second=second_str_map[str2[i]];
        if(_first!=_second)
        {
            return false;
        }   
    }
    return true;
}
int main(){
    string str1="aabc a";
    string str2="xxyz x";
    bool check=checkIsomor(str1,str2);
    cout<<check;
    return 0;
}