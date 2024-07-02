int height(TreeNode<int>* root, int& diameter){

    if(!root) return 0;

    int lh = height(root->left, diameter);

    int rh = height(root->right, diameter);

    diameter = max(diameter, lh+rh);

    return max(lh,rh)+1;

}

int diameterOfBinaryTree(TreeNode<int> *root){

    int diameter = 0;

    height(root, diameter);

    return diameter;

}