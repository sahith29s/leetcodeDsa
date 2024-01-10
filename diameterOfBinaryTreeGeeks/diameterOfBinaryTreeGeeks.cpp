class Solution {
  public:
    int height(Node*root , int &dia){
        if(root == NULL){
            return 0;
        }
        
        int leftHeight = height(root->left , dia);
        int rightHeight = height(root->right , dia);
        
        if(dia < leftHeight + rightHeight + 1){
            dia = leftHeight + rightHeight + 1;
        }
        
        return max(leftHeight , rightHeight) + 1;
        
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int dia;
        height(root , dia);
        return dia;
        
    }
};