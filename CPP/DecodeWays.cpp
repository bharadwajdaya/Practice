#include<iostream>
#include<vector>
using namespace std;
int numDecodings(int p, string& s) {
    int n = s.size();
    if(p == n) return 1;
    if(s[p] == '0') return 0;
    int res = numDecodings(p+1,s);
    if( p < n-1 && (s[p]=='1'|| (s[p]=='2'&& s[p+1]<'7'))) 
    {
        cout<<"p "<<p<<" Result "<<res<<endl;
        cout<<"Call "<<numDecodings(p+2,s)<<endl;
        res += numDecodings(p+2,s);
    }
    return res;
}
int numDecodings(string s) {
    return s.empty() ? 0: numDecodings(0,s);    
}

int main(){
    cout<<numDecodings("107")<<endl;
    return 0;
}