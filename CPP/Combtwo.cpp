#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int> ques,int ind,vector< vector<int>> ans,vector<int> temp)
{
    int size=ques.size();
    
    if(ind==size-1)
    {
        ans.push_back(ques);
        for(int i=0;i<ques.size();i++)
        {
            cout<<ques[i];
        }
        temp.clear();
        cout<<endl;
        return;
    }
    else
    {
        for(int i=ind;i<size;i++)
        {
            if(i!=ind && ques[i]==ques[ind]){continue;}

            swap(ques[i],ques[ind]);
            combination(ques,ind+1,ans,temp);
            
        }
    }
}
int main()
{
    vector<int> ques={3,3,0,3};
    vector<vector<int>> ans;
    vector<int> temp;
    combination(ques,0,ans,temp);
    return 0;
}