#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int val): val(val), left(nullptr), right(nullptr){}
    TreeNode(int val,TreeNode* left,TreeNode* right): val(val), left(left), right(right){}
};
int main(){
    TreeNode* one=new TreeNode(15);
    TreeNode* two=new TreeNode(7);
    TreeNode* three=new TreeNode(20,one,two);
    TreeNode* four=new TreeNode(9);
    TreeNode* root=new TreeNode(3,four,three);

    
    vector<vector<int>> ans;
    if(root==NULL)
    {
        cout<<"nothing present";
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    cout<<q.size();

    while(!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++)
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left !=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
            level.push_back(node->val);
        }
        ans.push_back(level);
    }


    return 0;
}