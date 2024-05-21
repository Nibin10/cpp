// e. Write a program to allocate memory for a binary tree node and perform operations like insertion, deletion, and traversal."
#include <iostream>
#include <queue>

// Definition of a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Function to create a new node
TreeNode* createNode(int data) {
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the binary tree
TreeNode* insertNode(TreeNode* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to find the minimum value node in a binary tree
TreeNode* findMin(TreeNode* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the binary tree
TreeNode* deleteNode(TreeNode* root, int data) {
    if (root == nullptr) return root;

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        TreeNode* temp = findMin(root->right);
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function for in-order traversal of the binary tree (left-root-right)
void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    // Insert some nodes into the binary tree
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    // Print the in-order traversal of the binary tree
    std::cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    // Delete a node (e.g., 30) from the binary tree
    root = deleteNode(root, 30);

    // Print the in-order traversal after deletion
    std::cout << "In-order traversal after deletion: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
