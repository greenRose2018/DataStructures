//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 4/17/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightdifference(BinaryTreeNode<Type>* parent);
    
public:
    ABLTree();
    
    void  insert(Type itemToInsert);
    void remove(Type value);
};
template <class Type>
AVLTree<Type> :: ABLTree()
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent)
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent)
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent)
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent)
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent)
{
    
}

template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value)
{
    
}
template <class Type>
AVLTree<Type> :: BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value)
{
    
}
template <class Type>
AVLTree<Type> :: insert(Type itemToInsert)
{
    
}

template <class Type>
AVLTree<Type> :: remove(Type value)
{
    
}

#endif /* AVLTree_hpp */
