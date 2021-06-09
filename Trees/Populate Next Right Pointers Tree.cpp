//https://www.interviewbit.com/problems/populate-next-right-pointers-tree/

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    queue<pair<TreeLinkNode*,int>>q;
    q.push({A,0});
    while(!q.empty()){
        pair<TreeLinkNode*,int>temp=q.front();
        q.pop();
        TreeLinkNode* n=temp.first;
        int l=temp.second;
        if(!q.empty() && q.front().second==l){
            n->next=q.front().first;
        }else{
            n->next=NULL;
        }
        if(n->left){
            q.push({n->left,l+1});
        }
        if(n->right){
            q.push({n->right,l+1});
        }
    }
}
