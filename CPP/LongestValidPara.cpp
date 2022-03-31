#include<iostream>
#include<stack>
using namespace std;
int validParenthesis(string str)
{
    int n=str.length();
    int longest=0;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
        {
            st.push(i);
        }
        else
        {
            if(!st.empty())
            {
                if(str[st.top()]=='(')
                {
                    st.pop();
                }
                else
                {
                    st.push(i);
                }
            }
            else
            {
                st.push(i);
            }
        }
    }
    cout<<st.size()<<endl;
    if(st.empty())
    {
        longest=n;
    }
    else
    {
        int a=n;
        int b=0;
        while(!st.empty())
        {
            b=st.top();
            st.pop();
            longest=max(longest,a-b-1);
            a=b;
        }
        longest=max(longest,a);
    }
    return longest;
}
int main()
{
    string str="(()(";
    cout<<validParenthesis(str)<<endl;
    return 0;
}