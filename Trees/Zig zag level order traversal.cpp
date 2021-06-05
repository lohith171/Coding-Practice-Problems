//https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
     if(!A)return {};
    queue<pair<TreeNode*,int>>q;
    map<int,vector<int>>m;
    q.push({A,0});
    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        TreeNode* n=temp.first;
        int l=temp.second;
        m[l].push_back(n->val);
        if(n->left){
            q.push({n->left,l+1});
        }
        if(n->right){
            q.push({n->right,l+1});
        }
        
    }
    vector<vector<int>>res(m.size());
    int c=0;
    for(auto x:m){
        if(c%2==0){
            res[c]=x.second;
        }else{
            reverse(x.second.begin(),x.second.end());
                res[c]=x.second;
        }
        c++;
    }
    return res;
}
