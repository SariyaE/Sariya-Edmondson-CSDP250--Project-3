#include "binarySTree.h"

BinarySearchTree::BinarySearchTree() : root(nullptr) {}

BinarySearchTree::~BinarySearchTree() {
    clearTree(root);
}

void BinarySearchTree::clearTree(Node* current) {
    if (current) {
        clearTree(current->leftNext);
        clearTree(current->rightNext);
        delete current;
    }
}

Node* BinarySearchTree::insertNode(Node* current, int value) {
    if (current == nullptr) {
        return new Node(value);
    }
    if (value < current->data) {
        current->leftNext = insertNode(current->leftNext, value);
    } else if (value > current->data) {
        current->rightNext = insertNode(current->rightNext, value);
    }
    return current;
}

void BinarySearchTree::insert(int value) {
    root = insertNode(root, value);
}

void BinarySearchTree::preOrderTraversal(Node* current) {
    if (current) {
        cout << current->data << " ";
        preOrderTraversal(current->leftNext);
        preOrderTraversal(current->rightNext);
    }
}

void BinarySearchTree::inOrderTraversal(Node* current) {
    if (current) {
        inOrderTraversal(current->leftNext);
        cout << current->data << " ";
        inOrderTraversal(current->rightNext);
    }
}

void BinarySearchTree::postOrderTraversal(Node* current) {
    if (current) {
        postOrderTraversal(current->leftNext);
        postOrderTraversal(current->rightNext);
        cout << current->data << " ";
    }
}

void BinarySearchTree::preOrder() {
    preOrderTraversal(root);
    cout <<endl;
}

void BinarySearchTree::inOrder() {
    inOrderTraversal(root);
    cout<<endl;
}

void BinarySearchTree::postOrder() {
    postOrderTraversal(root);
    cout<<endl;
}