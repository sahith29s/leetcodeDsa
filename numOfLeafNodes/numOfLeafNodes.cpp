/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
void inorder(BinaryTreeNode<int> *root,int &number){
    if(root == NULL){
        return;
    }
    
    inorder(root->right, number);
    if(root->left == NULL && root->right==NULL){
        number++;
    }
    inorder(root->left, number);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    // Write your code here.
    int number = 0;
    inorder(root , number);
    return number;
}