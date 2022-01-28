#include<iostream>
#include<vector>
#include<string>
using namespace std;
string returnRoman(int num)
{
    string k[]={"M","MM","MMM"};
    string c[]={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string x[]={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string o[]={"I","II","III","IV","V","VI","VII","VIII","IX"};

    string _k=(num/1000)-1>=0 ? k[(num/1000)-1] : "";

    string _c=((num%1000)/100)-1>=0 ? c[((num%1000)/100)-1] : "";

    string _x=((num%100)/10)-1>=0 ? x[((num%100)/10)-1] : "";

    string _o=(num%10)-1>=0 ? o[(num%10)-1] : "";
    string ans=_k+_c+_x+_o;
    return ans;
}
int main()
{
    int num=3010;
    cout<<returnRoman(num)<<endl;
    return 0;
}