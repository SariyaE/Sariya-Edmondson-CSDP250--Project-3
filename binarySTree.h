#ifndef BINARYSTREE_H
#define BINARYSTREE_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* leftNext;  
    Node* rightNext; 

    Node(int value) : data(value), leftNext(nullptr), rightNext(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    Node* insertNode(Node* current, int value);

    void preOrderTraversal(Node* current);
    void inOrderTraversal(Node* current);
    void postOrderTraversal(Node* current);

public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(int value);
    void preOrder();
    void inOrder();
    void postOrder();
    void clearTree(Node* current);
};

#endif