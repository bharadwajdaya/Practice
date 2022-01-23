#include<iostream>
#include<string>
#include<vector>
using namespace std;
void swap(char *a,char *b)
{
    char swap=*a;
    *a=*b;
    *b=swap;
}
void permute(string str,int l,int r)
{
    if(l==r)
    {
        cout<<str<<endl;
        return;
    }
    else
    {
        for(int i=l;i<r;i++)
        {
            swap(&str[l],&str[i]);
            permute(str,l+1,r);
            swap(&str[l],&str[i]);
        }
    }
}
int main(){
    string str="123";
    permute(str,0,str.length());
    return 0;
}