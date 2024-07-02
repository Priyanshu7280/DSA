/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
//algo:  1. Create NodeToParent mapping
//         2. find target node
//         3.burn the tree in minimum time

#include<map>
#include<unordered_map>
// Creating node to parent mapping using Level order traversal

BinaryTreeNode<int>* createMapping(BinaryTreeNode<int>* root, int start,  map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &nodeToParent){

    BinaryTreeNode<int>* res = NULL;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    nodeToParent[root] = NULL;

    while(!q.empty()){

        BinaryTreeNode<int>* front = q.front();
        q.pop();

        if(front->data == start){
            res = front;
        }

        if(front->left){
            nodeToParent[front->left] = front;
            q.push(front->left);
        }

        if(front->right){
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burnTree(BinaryTreeNode<int>* root,  map<BinaryTreeNode<int>*,  BinaryTreeNode<int>*> &nodeToParent){
    int ans = 0;

    map<BinaryTreeNode<int>*, bool> visited;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    visited[root] = 1;

    while(!q.empty()){

        int n = q.size();
        bool flag = false;
        for(int i=0; i<n; i++){

            BinaryTreeNode<int>* front = q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                q.push(front->left);
                visited[front->left] = 1;
                flag = 1;
            }

            if(front->right && !visited[front->right]){
                q.push(front->right);
                visited[front->right] = 1;
                flag = 1;
            }

            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = 1;
                flag = 1;
            }
        }
        if(flag)
           ans++;
    }
    return ans;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start) {

    // DS to store mapping of node to parent 
    map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> nodeToParent;

    // Make a map to track visited nodes
    unordered_map<int, bool> visited;

    // Step 1: Create a node to parent mapping
    BinaryTreeNode<int>* target = createMapping(root, start, nodeToParent);

    // Step 2: Burn the tree
    return burnTree(target, nodeToParent);
}