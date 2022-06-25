// Red Black Tree implementation in C++

#include <iostream>

using namespace std;

// data structure that represents a node in the tree
struct Node {
    int data; // holds the key
    Node* parent; // pointer to the parent
    Node* left; // pointer to left child
    Node* right; // pointer to right child
    int color; // 1-> Red, 0 -> Black
};

typedef Node* NodePtr;

// class RBTree implements the operations in Red Black Tree
class RBTree {
    private:
        NodePtr root;
        NodePtr TNull;

        // initializes the nodes with appropriate values;
        // all the pointers are set to point to the null pointer
        void initializeNullNode(NodePtr node, NodePtr parent) {
            node->data = 0;
            node->parent = parent;
            node->left = nullptr;
            node->right = nullptr;
            node->color = 0;
        }
};