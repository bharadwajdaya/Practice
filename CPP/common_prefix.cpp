#include<iostream>
#include<algorithm>
using namespace std;
string longestCommonPrefix(string sample[],int count)
{
    sort(sample,sample+count);
    int _min=sample[0].length();
    string _first=sample[0];
    string _last=sample[count-1];
    int i=0;
    while(i<_min)
    {
        if(_first[i]==_last[i])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    string prefix=_first.substr(0,i);
    return prefix;
}
int main(){

    string sample[] = {"geeksforgeeks", "geeks", "geek","geezer"};
    cout<<longestCommonPrefix(sample,*(&sample+1)-sample);
    return 0;
}