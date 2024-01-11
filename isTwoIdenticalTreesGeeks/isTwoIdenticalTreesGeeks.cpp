
class Solution
{
public:
  void nlr(Node *root1, Node *root2, bool &is)
  {
    if (root1 == NULL && root2 == NULL)
    {
      return;
    }
    if (root1 == NULL && root2 != NULL)
    {
      is = false;
      return;
    }
    if (root2 == NULL && root1 != NULL)
    {
      is = false;
      return;
    }

    if (root1->data != root2->data)
    {
      is = false;
      return;
    }

    nlr(root1->left, root2->left, is);
    nlr(root1->right, root2->right, is);
  }

  // Function to check if two trees are identical.
  bool isIdentical(Node *r1, Node *r2)
  {
    bool is = true;
    nlr(r1, r2, is);
    return is;
    // Your Code here
  }
};