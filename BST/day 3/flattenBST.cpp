void inorder(TreeNode<int>* root, vector<int> &sam){

    if(root == NULL){
        return;
    }

    inorder(root->left,sam);
    sam.push_back(root->data);
    inorder(root->right,sam);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{   
    vector<int> ans;
    inorder(root,ans);
    TreeNode<int>* newNode = new TreeNode<int>(ans[0]);
    TreeNode<int>* curr = newNode;

    for(int i=1;i<ans.size();i++){
        TreeNode<int>* temp = new TreeNode<int>(ans[i]);
        curr->right = temp;
        temp->left = NULL;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;
    return newNode;
}
