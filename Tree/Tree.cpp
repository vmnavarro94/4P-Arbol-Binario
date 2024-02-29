//
// Created by Victor Navarro on 29/02/24.
//

#include "Tree.h"

Tree::Tree(int _value) {
    value = _value;
}

int Tree::getValue() {
    return value;
}

void Tree::push(int _value) {
    Tree* newBranch = new Tree(_value);
    if(left == nullptr) {
        left = newBranch;
    } else if(right == nullptr) {
        right = newBranch;
    } else if(left->left == nullptr || left->right == nullptr){
        left->push(_value);
    } else {
        right->push(_value);
    }
}


void Tree::preorderLeft() {
    std::cout << value << ", ";

    if(left != nullptr) {
        left->preorderLeft();
    }
    if(right != nullptr) {
        right->preorderLeft();
    }
}

void Tree::preorderRight() {
    std::cout << value << ", ";

    if(right != nullptr) {
        right->preorderRight();
    }
    if(left != nullptr) {
        left->preorderRight();
    }
}

void Tree::postorderIzq() {
    if(left != nullptr) {
        left->postorderIzq();
    }
    if(right != nullptr) {
        right->postorderIzq();
    }

    std::cout << value << ", ";
}

void Tree::postorderRight() {
    if(right != nullptr) {
        right->postorderRight();
    }
    if(left != nullptr) {
        left->postorderRight();
    }

    std::cout << value << ", ";
}