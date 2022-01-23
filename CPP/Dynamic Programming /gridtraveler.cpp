#include<iostream>
#include<unordered_map>
using namespace std;
// int gridPaths(int a,int b)
// {
//     if(a==1 && b==1)
//     {
//         return 1;
//     }
//     if(a==0 || b==0)
//     {
//         return 0;
//     }
//     return gridPaths(a-1,b)+gridPaths(a,b-1);
// }
long gridPaths(int a,int b,unordered_map<string,long>& st)
{
    string _temp=to_string(a)+","+to_string(b);
    if(st.find(_temp)!=st.end())
    {
        return st.at(_temp);
    }
    if(a==1 && b==1)
    {
        return st[_temp]=1;
    }
    if(a==0 || b==0)
    {
        return 0;
    }
    st[_temp]=gridPaths(a-1,b,st)+gridPaths(a,b-1,st);
    return st[_temp];
}
int main()
{
    unordered_map<string,long> st;
    cout<<gridPaths(18,18,st);
    return 0;
}