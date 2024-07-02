void inorder(BinaryTreeNode<int>* root, vector<int> &sam){

    if(root == NULL){
        return;
    }

    inorder(root->left,sam);
    sam.push_back(root->data);
    inorder(root->right,sam);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {


    vector<int>inorderVal;

    inorder(root, inorderVal);

    int i= 0, j = inorderVal.size()-1;

    while(i<j){

        int sum = inorderVal[i] + inorderVal[j];

        if(sum == target){
            return true;
        }

        else if(sum<target){
            i++;
        }
        else{
            j--;
        }

        
    }
    return false;
}