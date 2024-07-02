void inorder(TreeNode *root, vector<int>& in) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

// Merge two sorted arrays into one sorted array
vector<int> mergeArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans.push_back(a[i++]);
        } else {
            ans.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        ans.push_back(a[i++]);
    }

    while (j < b.size()) {
        ans.push_back(b[j++]);
    }

    return ans;
}

// Convert sorted array to BST
TreeNode* inOrderToBST(const vector<int>& arr, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = inOrderToBST(arr, start, mid - 1);
    root->right = inOrderToBST(arr, mid + 1, end);

    return root;
}

// Merge two BSTs into one balanced BST represented as a vector
vector<int> mergeBST(TreeNode *root1, TreeNode *root2) {
    vector<int> in1, in2;
    inorder(root1, in1);
    inorder(root2, in2);

    vector<int> merged = mergeArrays(in1, in2);
    return merged;
}