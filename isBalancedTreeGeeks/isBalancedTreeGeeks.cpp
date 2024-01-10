class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    int height(Node *root, bool &is)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftHeight = height(root->left, is);
        int rightHeight = height(root->right, is);

        if (max(leftHeight, rightHeight) - min(leftHeight, rightHeight) > 1)
        {
            is = false;
        }

        return max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(Node *root)
    {
        bool is = true;
        height(root, is);
        return is;
    }
};