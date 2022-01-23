#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
// int getLongestUniqueSubString(string str){
//     int last_index[26]={-1};
//     int left=0;
//     int length=0;
//     int max=0;
//     int ind=0;
//     while(ind<str.length())
//     {
//         left= left > last_index[str[ind]-'a']+1 ? left:last_index[str[ind]-'a']+1;
//         length=length> ind-left+1 ? length: ind-left+1;
//         last_index[str[ind]-'a']=ind;
//         ind++;
//     }
//     return length;
// }
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int getLongestUniqueSubString(string str)
{
    int length=0;
    int i=0;
    int j=0;
    unordered_set<char> alpha;
    while(i<str.length())
    {  
        if(alpha.count(str[i])==0)
        {
            alpha.insert(str[i]);
            i++;
            length=max(length,alpha.size());
        }
        else
        {
            alpha.erase(str[j]);
            j++;
        }
    }
    return alpha.size();

}
int main(){
    string str="abcabcd";
    cout<<getLongestUniqueSubString(str);
    return 0;
}