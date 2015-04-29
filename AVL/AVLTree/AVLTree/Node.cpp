#include "Node.h"

//template <class T>
Node::Node(T content, Node<T>* init) {
    // Initializing node with null values.
    data = content;
    left = right = NULL;
    parent = init;
    height = -1;
}

Node::~Node() {
    parent = left = right = NULL;
}

T        Node::getData() { return data; }

Node<T>* Node::getLeft() { return left; }
Node<T>* Node::getRight() { return right; }
Node<T>* Node::getParent() { return parent; }
int      Node::getHeight() { return height }


void     Node::setLeft(Node<T>* ptr) { left = ptr; }
void     Node::setRight(Node<T>* ptr) { right = ptr; }
void     Node::setParent(Node<T>* ptr) { parent = ptr; }
void     Node::setHeight(int h) { height = h }
