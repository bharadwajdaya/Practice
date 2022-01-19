#include<iostream>
#include<sstream>
using namespace std;
string encryptedData(string sample)
{
    int i=0;
    int count=1;
    string final;
    int flag=1;
    int _i=0;
    for(i=0;i<sample.size();i++)
    {
        if(flag==1)
        {
            final+=sample[i];
            _i++;
        }

        if(sample[i]==sample[i+1])
        {
            count++;
            flag=0;
        }
        else
        {
            final+=count+'0';

            count=1;
            flag=1;
        }
    }
    return final;
}
int main(){
    string sample="aaaaaaaaaaaaaaaaaaaaaaaaabbcccc";
    cout<<encryptedData(sample);
    return 0;
}