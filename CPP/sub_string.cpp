// A C++ dynamic programming
// solution for longest palindrome

#include<iostream>
using namespace std;

// Function to print a substring
// str[low..high]
void printSubStr(
    string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}

int longestPalSubstr(string str)
{
    // get length of input string
    int n = str.size();

    // table[i][j] will be false if substring
    // str[i..j] is not palindrome.
    // Else table[i][j] will be true
    bool table[n][n];

    memset(table, 0, sizeof(table));

    // All substrings of length 1
    // are palindromes
    int maxLength = 1;

    for (int i = 0; i < n; ++i)
        table[i][i] = true;

    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (str[i] == str[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2.
    // k is length of substring
    for (int k = 3; k <= n; ++k) {
        // Fix the starting index
        for (int i = 0; i < n - k + 1; ++i) {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;

            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            
            if (table[i + 1][j - 1] && str[i] == str[j]) {
                cout<<str[i]<<" "<<str[j]<<endl<<"k i j "<<endl<<k<<" "<<i<<" "<<j<<endl;
                table[i][j] = true;

                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);
    cout<<endl;
    // return length of LPS
    return maxLength;
}

// Driver Code
int main()
{
    string str = "cbccba";
    cout << "\nLength is: "
         << longestPalSubstr(str);
    return 0;
}