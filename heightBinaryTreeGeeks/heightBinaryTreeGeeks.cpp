int height(struct Node* node)
{
 
    if(node == NULL){
        return 0;
    }
    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    int total;
    if(rightHeight >= leftHeight){total = rightHeight + 1;}
    else{total = leftHeight + 1;}

    return total;
}
