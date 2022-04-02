#include<iostream>
#include<vector>
using namespace std;
string convert(string s, int numRows) {
    int n=s.length();

    int g=numRows-1;

    int i=0;
    bool flag=false;

    int row=0;
    string str[numRows];
    if(numRows==1)
    {
        return s;
    }
    while(true)
    {
        if(i==n)
        {
            break;
        }
        if(row==g)
        {
            flag=true;
        }
        if(row==0)
        {
            flag=false;
        }
        cout<<row<<" "<<i<<" "<<n<<" "<<s[i]<<endl;
        str[row]+=s[i];
        cout<<str[row]<<endl;
        i++;

        if(flag==true)
        {
            row--;
        }
        else if(flag==false)
        {
            row++;
        }
    }
    string _s="";
    for(int i=0;i<numRows;i++){
        _s+=str[i];
    }
    return _s;
}
int main()
{
    string str="ABC";
    int n=2;
    cout<<convert(str,n);
    return 0;
}