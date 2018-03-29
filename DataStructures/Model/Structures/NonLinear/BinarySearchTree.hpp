//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"
using namespace std:

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinarySearchTree<Type> * startNode);
    int calculateHeight(BinarySearchTree<Type> * startNode);
    bool isBalanced(BinarySearchTree<Type> * startNode);
    bool isComplete(BinarySearchTree<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinarySearchTree<Type> * inStart);
    void preOrderTraversal(BinarySearchTree<Type> * preStart);
    void postOrderTraversal(BinarySearchTree<Type> * postStart);
    
    BinarySearchTree<Type> * getRightMostChild(BinarySearchTree<Type> * current);
    BinarySearchTree<Type> * getLeftMostChild(BinarySearchTree<Type> * current);
    
    void removeNode(BinarySearchTree<Type> * removeMe);
    
public:
    BinarySearchTree(); // Constructor
    ~BinarySearchTree(); // Destructor
    
    BinarySearchTree<Type> * getRoot();
    void setRoot(BinarySearchTree<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinarySearchTree<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

#endif /* BinarySearchTree_hpp */
