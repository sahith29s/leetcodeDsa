       }
        return false;

        // int minNumber = max(vec1.size(), vec2.size());
  // }
    }
};        // for(int i = 0 ; i < minNumber; i++){
        //     cout << vec1[i] << vec2[i];
        //     if(vec1[i] != vec2[i]){
        //         bo = false;
        //         break;
        //     }
            if(vec1 == vec2){
            return true;
     }
        
        if(root->left == NULL && root->right == NULL){
            vec.push_back(root->val);
            return;
        }
        inorder(root->left , vec);
        inorder(root->right , vec);

    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> vec1;
        vector<int> vec2;

        inorder(root1 , vec1);
        inorder(root2 , vec2);

  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include<vector>
class Solution {
    void inorder(TreeNode*root , vector<int> &vec){
        if(root == NULL){
            return;
    
