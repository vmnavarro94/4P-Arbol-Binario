//
// Created by Victor Navarro on 29/02/24.
//

#ifndef ARBOL_BINARIO_TREE_H
#define ARBOL_BINARIO_TREE_H
#include<iostream>

class Tree {
private:
    int value;
    Tree* left = nullptr;
    Tree* right = nullptr;
public:
    Tree(int _value);
    int getValue();
    void push(int _value);
    void preorderLeft();
    void preorderRight();
    void postorderIzq();
    void postorderRight();
};


#endif //ARBOL_BINARIO_TREE_H
