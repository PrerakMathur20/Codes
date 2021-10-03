#include <iostream>
#include <cstddef>

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    void preOrder(Node *root)
    {

        if (root == NULL)
            return;

        std::cout << root->data << " ";

        preOrder(root->left);
        preOrder(root->right);
    }
    Node *insert(Node *root, int data)
    {
        if (root == nullptr)
        {
            root = new Node(data);
            root->left = nullptr;
            root->right = nullptr;
            return root;
        }
        Node *ptr = root, *par = root;
        while (ptr != nullptr)
        {
            par = ptr;
            if (ptr->data == data)
                return root;
            if (ptr->data < data)
                ptr = ptr->right;
            else
                ptr = ptr->left;
        }
        if (par->data > data)
        {
            par->left = new Node(data);
        }
        else
        {
            par->right = new Node(data);
        }
        return root;
    }
}; //End of Solution

int main()
{

    Solution myTree;
    Node *root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.preOrder(root);
    return 0;
}
