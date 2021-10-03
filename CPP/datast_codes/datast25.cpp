/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

bool checkBST(Node* root, int mn=-1, int mx=100000) {
        if (root == NULL) return true;
        if (root->data < mn or root->data > mx) return false;
        return checkBST(root->left, mn, root->data - 1) && checkBST(root->right, root->data + 1, mx);
    }