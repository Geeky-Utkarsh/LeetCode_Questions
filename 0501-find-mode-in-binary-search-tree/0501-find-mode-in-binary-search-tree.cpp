/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfsTraversal(TreeNode* root, unordered_map<int,int>&freq){
        if(!root){ // root==NULL;
            return;
        }
        dfsTraversal(root->left,freq);
        freq[root->val]++;
        dfsTraversal(root->right,freq);
    }

    vector<int> findMode(TreeNode* root) {

        unordered_map<int,int>mp;
        dfsTraversal(root,mp);

        vector<int>res;
        int maxFreq=0;

        for(auto &e : mp){
            maxFreq=max(maxFreq,e.second);
        }
        
        for(auto e : mp){
            if(maxFreq==e.second)
               res.push_back(e.first);
        }
        return res;
    }
};