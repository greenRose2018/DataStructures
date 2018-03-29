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
    <#member functions#>
};

#endif /* BinarySearchTree_hpp */
