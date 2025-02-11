int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}


int maxDepth(struct TreeNode* root) {

    if (root == NULL) {
        return 0;
    }
    return max(
        maxDepth(root -> left),
        maxDepth(root -> right)
    ) + 1;
}
