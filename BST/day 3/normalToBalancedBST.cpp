void inorder(TreeNode<int>* root, vector<int> &in){

    if(root == NULL){
        return;
    }

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);

}

TreeNode<int>* inOrderToBST(int s, int e, vector<int> in){

    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root ->left = inOrderToBST(s, mid-1, in);
    root->right = inOrderToBST(mid+1, e, in);

    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {

    vector<int> inOrderVal;
    inorder(root, inOrderVal);
    return inOrderToBST(0, inOrderVal.size()-1, inOrderVal);
}
