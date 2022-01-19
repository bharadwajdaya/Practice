#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkStatus(string str)
{
    if(str.length()%2!=0) return false;
    stack<char> stack;
    int flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            stack.push(str[i]);
        }
        else if(str[i]=='}' && !stack.empty() && stack.top()=='{')
        {
            stack.pop();
        }
        else if(str[i]==')' && !stack.empty() && stack.top()=='(')
        {
            stack.pop();
        }
        else if(str[i]==']' && !stack.empty() && stack.top()=='[')
        {
            stack.pop();
        }
        else{
            flag=1;
            break;
        }
    }
    if(stack.empty() && flag ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    string str="([}}])";
    cout<<checkStatus(str);
    return 0;
}