TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)

{

    // Write your code here.

    if(root==NULL)

    {

        return NULL;

    }

 

    if(root->data == P->data || root->data == Q->data)

    {

        return root;

    }

    

    TreeNode *leftnode = LCAinaBST(root->left,P,Q);

    TreeNode *rightnode = LCAinaBST(root->right,P,Q);

 

    if(leftnode!=NULL && rightnode!=NULL)

    {

        return root;

    }

    else if(leftnode!=NULL && rightnode==NULL)

    {

        return leftnode;

    }
    else if(leftnode==NULL && rightnode!=NULL)
    {
        return rightnode;
    }
    else
    {
        return NULL;
    }
}