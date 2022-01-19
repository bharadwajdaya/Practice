#include<iostream>
using namespace std;
bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
void get(string s, int k)
{
  
    // Stores the length of longest
    // substring with K vowels
    int ans = -1;
  
    // Stores the number of vowels
    // in the current window
    int vow = 0;
  
    // Stores the resultant string
    string res;
    int l = 0, r = 0;
  
    while (r < s.length()) {
        if (isVowel(s[r]))
            vow++;
        if (vow == k) {
            if (ans < r - l + 1) {
                ans = max(ans, r - l + 1);
                res = s.substr(l, r - l + 1);
            }
        }
        if (vow > k) {
            while (vow > k) {
                if (isVowel(s[l]))
                    vow--;
                l++;
            }
            if (ans < r - l + 1) {
                ans = max(ans, r - l + 1);
                res = s.substr(l, r - l + 1);
            }
        }
        r++;
    }
    cout << ans << " " << res;
}
void getLargestSubstring(string str,int k)
{
    int size=str.length();
    int ans=-1;
    int vow=0;
    int r=0;
    int l=0;
    string res;

    while(r<size)
    {
        if(isVowel(str[r]))
        {
            vow++;
        }
        if(vow==k)
        {
            if(ans<r-l+1)
            {
                ans=max(ans,r-l+1);
                res=str.substr(l,r-l+1);
            }
        }
        if(vow>k)
        {
            while(vow>k){
                if(isVowel(str[l]))
                {
                    vow--;
                }
                l++;
            }
            if(ans<r-l+1)
            {
                ans=max(ans,r-l+1);
                res=str.substr(l,r-l+1);
            }

        }
        r++;
    }
    cout<<ans<<endl<<res<<endl;
}
int main(){
    string str="GeeksForGeeks";
    int k=3;
    //getLargestSubstring(str,k);
    get(str,k);
    return 0;
}