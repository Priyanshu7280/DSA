BinaryTreeNode<int>* minNode(BinaryTreeNode<int>* curr){
        curr= curr->right;
        while(curr && curr->left){
            curr= curr->left;
        }
        return curr;
    }
    
BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
    if( root==NULL){
            return root;
        }
        if( root-> data > key){
            root-> left = deleteNode(root->left,key);
        }
        else if ( root-> data < key){
            root-> right = deleteNode(root->right,key);
        }

        else{
        if(root->left==NULL){
        BinaryTreeNode<int>*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            BinaryTreeNode<int>*temp=root->left;
            delete root;
            return temp;
        }
        else{
           BinaryTreeNode<int>*succ=minNode(root);
            root->data = succ-> data;
            root->right=deleteNode(root->right,succ->data);
        }
    }
    return root;
}
