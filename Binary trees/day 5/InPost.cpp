/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
int findPosition(vector<int> inOrder, int element, int start, int end){

    for(int i = start; i<= end; i++){
        if(inOrder[i] == element){
            return i;
        }

    }
        return -1;
}

TreeNode<int> *solve(vector<int> &postOrder, vector<int> &inOrder, int &index, int start, int end, int n){

    //base case
    if(index < 0 || start > end)
        return NULL;

    int element = postOrder[index--];
    TreeNode<int>* root = new TreeNode<int>(element);
    int position = findPosition(inOrder, element, start, end);

    //recursive calls
    root->right = solve(postOrder, inOrder,index, position+1,  end, n);
    root->left = solve(postOrder, inOrder,index, start, position-1, n);
    

    return root;

}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder){
	
     int postIndex = inOrder.size() - 1;
     return solve(postOrder, inOrder, postIndex, 0, inOrder.size()-1,inOrder.size());
}
