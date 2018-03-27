//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <iostream>
#include "Node.hpp"

template <class Type>
class BinaryTreeNode
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
    
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeft();
    BinaryTreeNode<Type> * getRight();
    
    void setRoot(BinaryTreeNode<Type> * );
    void setLeft(BinaryTreeNode<Type> * );
    void setRight(BinaryTreeNode<Type> * );
    
};

