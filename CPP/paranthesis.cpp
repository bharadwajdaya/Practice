#include<iostream>
#include<string>
#include<vector>
using namespace std;
void backtrack(int n,string cur_str,vector<string>& new_str,int open,int close)
{
    if(cur_str.length()==n*2)
    {
        new_str.push_back(cur_str);
        return;
    }
    else
    {
        if(open<n)
        {
            backtrack(n,cur_str+"(",new_str,open+1,close);
        }
        if(close<open)
        {
            backtrack(n,cur_str+")",new_str,open,close+1);
        }
       
    }
}
void generateParanthesis(int n)
{
    vector<string> new_str;
    backtrack(n,"",new_str,0,0);
    for(auto i=new_str.begin();i!=new_str.end();i++)
    {
        cout<<*i<<endl;
    }
    cout<<endl;
}
int main(){
    int n=4;
    generateParanthesis(n);
    return 0;
}