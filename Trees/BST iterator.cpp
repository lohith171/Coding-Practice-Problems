//https://www.interviewbit.com/problems/bst-iterator/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

priority_queue<int,vector<int>,greater<int>>pq;
BSTIterator::BSTIterator(TreeNode *root) {
  if(root){
      queue<TreeNode*>q;
  q.push(root);
  while(!q.empty()){
      TreeNode* n=q.front();
      q.pop();
      pq.push(n->val);
      if(n->left){
          q.push(n->left);
      }
      if(n->right){
          q.push(n->right);
      }
  }
  }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
  return (pq.empty()!=true);
}

/** @return the next smallest number */
int BSTIterator::next() {
        int k=pq.top();
        pq.pop();
  return k;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
